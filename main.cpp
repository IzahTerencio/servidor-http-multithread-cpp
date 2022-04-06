/*
*  NOME DO ARQUIVO: main.cpp
*  DATA: 2022-04-06
*  AUTOR: Izabella Terêncio da Silva Assis / izahterencio@gmail.com
*  DESCRIÇÃO: Implementação de um servidor HTTP simples.
*/


#include <iostream>
#include <sys/types.h>     // Para tipos de arquivos usados em chamadas de sistema
#include <sys/socket.h>
#include <netinet/in.h>  // Para endereços de domínio da Internet
#include <unistd.h>     // read() and write()
#include <string.h>    // Para usar função bzero()

#define PORT_NUMBER 8080

using namespace std;

int main(){

    int socket_fd, newSocket, n;
    int opt = 1;
    socklen_t clientLen;
    char readBuffer[1024];
    struct sockaddr_in serverAddr; // Endereço do servidor
    struct sockaddr_in clientAddr; // Endereço do cliente que se conectar ao servidor

    // AF_LOCAL é definido pelo padrão POSIX para comunicação entre processos na mesma máquina
    // AF_INET é definido para comunicação entre processos em diferentes máquinas
    socket_fd = socket(AF_INET, SOCK_STREAM, 0);

    if(socket_fd < 0){ // Quando a chamada ao socket falha, é retornado valor -1
        cerr << "FATAL: Erro ao criar socket";
        exit(EXIT_FAILURE);
    }

    //bzero((char*) &serverAddr, sizeof(serverAddr)); // "Setando" os valores do buffer em 0 (zero)
    serverAddr = {}; // Alternativa à bzero(), que aparentemente está depreciada

    // Forçando binding na porta especificada
    if (setsockopt(socket_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))){
        cerr << "setsockopt";
        exit(EXIT_FAILURE);
    }

    serverAddr.sin_family = AF_INET; // Por padrão é AF_INET
    serverAddr.sin_port = htons(PORT_NUMBER); // Converte o número de porta em "network byte order"
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    // Ligando o socket ao endereço do host e ao número de porta no qual o servidor executará
    if(bind(socket_fd, (struct sockaddr*) &serverAddr, sizeof(serverAddr)) < 0){
        cerr << "AVISO: Erro durante binding";
        exit(EXIT_FAILURE);
    }

    // O servidor inicia a escuta na porta determinada
    listen(socket_fd, 5); // 5 é o tamanho padrão da fila de espera

    clientLen = sizeof(clientAddr);

    newSocket = accept(socket_fd, (struct sockaddr*) &clientAddr, &clientLen);
    if(newSocket < 0){
        cerr << "AVISO: Erro ao aceitar cliente";
        exit(EXIT_FAILURE);
    }

    bzero(readBuffer, 1024);
    n = read(newSocket, readBuffer, 1024);
    if(n < 0){
        cerr << "ERRO ao ler do socket";
        exit(EXIT_FAILURE);
    }
    printf("Here is the message: %s", readBuffer);

    // Resposta do servidor
    n = write(newSocket,"I got your message",18);
    if(n < 0){
        cerr << "ERRO ao escrever no socket";
        exit(EXIT_FAILURE);
    }

    return 0;
}
