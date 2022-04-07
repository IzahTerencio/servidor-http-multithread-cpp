# Servidor HTTP _Multithread_
Implementação, na linguagem C++, de um servidor HTTP multithread simples.
Trabalho inicialmente realizado para a disciplina de Redes de Computadores, do curso Bacharelado em Engenharia de Computação, do IFMG - _Campus_ Bambuí.


## Requisitos
1. O servidor deve receber como parâmetro o caminho de um diretório, no qual fará as buscas solicitadas nas requisições dos clientes;
2. O servidor deve suportar múltiplas conexões de clientes de forma simultânea;
   * Em cada requisição, é fornecido um caminho de arquivo, o qual deve ser buscado a partir do diretório fornecido inicialmente;
   * O servidor deve buscar o arquivo: se o mesmo existir no caminho especificado, deve ser retornado. Caso não exista, mensagem apropriada deve ser retornada ao cliente;
3. A implementação deve ser realizada na linguagem C++, com o paradigma de orientação a objetos.


## A implementação
* ### Parte 1 - Programa servidor
    * Link: <https://github.com/IzahTerencio/servidor-http-multithread-cpp/releases/latest>.
* ### Parte 2 - Processamento da requisição
* ### Parte 3 - Manipulação de arquivos e diretórios
* ### Parte 4 - _Multithreading_


## Executando a aplicação na máquina local
* ### Servidor
    * #### Utilizando o ambiente da IDE Codeblocks
        ![img0](https://user-images.githubusercontent.com/56902784/162282811-909cf7c3-7df4-494e-af7a-3450f04085da.png)
    * #### Utilizando linha de comando via terminal (Linux Ubuntu 18.04.6 LTS)
      1. Em um terminal, navegue até o diretório onde está o programa;
      2. Entre com o seguinte comando para compilar o(s) arquivos do programa: `g++ -o nomeExec arq1.cpp (arq2.cpp ... arqN.cpp)`
      3. Em seguida, execute o arquivo .exe gerado com `./nomeExec`
* ### Cliente
    1. Após o programa servidor ter sido executado e estar escutando a porta determinada;
    2. Execute `telnet localhost numPorta`, onde numPorta é a porta escolhida. Assim, é feita uma tentativa de conexo com o servidor em execução. Caso a mesma seja aceita pelo servidor, será possível realizar alguma ação, como por exemplo o envio de uma mensagem, a depender da implementação.


## Considerações


## Referências bibliográficas e Links Úteis
  * 
  * COMANDOS Telnet. Disponível em: <[http://underpop.online.fr/w/windows/telnetw/comandos-telnet.htm](url)>. Acesso em: 4 de abr. de 2022.
  * DOCS for socket functions. **cplusplus.com**. Disponível em: <[http://cplusplus.com/forum/unices/82128/](url)>. Acesso em: 4 de abr. de 2022.
  * GUIA básico de Markdown. **PIPZ Academy**. Disponível em: <[https://docs.pipz.com/central-de-ajuda/learning-center/guia-basico-de-markdown#open](url)>. Acesso em: 4 de abr. de 2022.
  * HONG, K.  Multi-Threaded Programming Terminology - 2020. **BOGOTOBOGO**, 2020. Disponível em: <[https://www.bogotobogo.com/cplusplus/multithreaded.php](url)>. Acesso em: 4 de abr. de 2022.
  * HONG, K. Sockets - Server & Client - 2020. **BOGOTOBOGO**, 2020. Disponível em: <[https://www.bogotobogo.com/cplusplus/sockets_server_client.php](url)>. Acesso em: 4 de abr. de 2022.
  * HONG, K. Sockets - Server & Client 2 - 2020. **BOGOTOBOGO**, 2020. Disponível em: <[https://www.bogotobogo.com/cplusplus/sockets_server_client_2.php](url)>. Acesso em: 4 de abr. de 2022.
  * NETINET/IN.H - Internet address family. **The Open Group Base Specifications Issue 7**. Disponível em: <[https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/netinet_in.h.html](url)>. Acesso em: 4 de abr. de 2022.
  * SOCKET(2). **Linux manual page**. Disponível em: <[https://man7.org/linux/man-pages/man2/socket.2.html](url)>. Acesso em: 4 de abr. de 2022.
  * SYS/SOCKET.H - main sockets header. **The Open Group Base Specifications Issue 7**. Disponível em: <[https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_socket.h.html](url)>. Acesso em: 4 de abr. de 2022.
  * TESTANDO a conectividade de porta com Telnet (2015980). **vmware Customer Connect**, 2013. Disponível em: <[https://kb.vmware.com/s/article/2015980?lang=pt_PT](url)>. Acesso em: 4 de abr. de 2022.
