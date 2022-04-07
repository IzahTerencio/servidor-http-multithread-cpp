/*
*  NOME DO ARQUIVO: httprequest.cpp
*  DATA: 2022-04-06
*  AUTOR: Izabella Terêncio da Silva Assis / izahterencio@gmail.com
*  DESCRIÇÃO: Arquivo de implementação da classe responsável por processamento de requisições.
*/

#include "httprequest.h"
#include <iostream>
#include <cstring> // para strcpy e c_str

using namespace std;

// Construtor padrão
httpRequest :: httpRequest(){
    bzero(filePath, 1024);
    fileName = "";
}


// Construtor parametrizado
httpRequest :: httpRequest(string fp){
    //filePath = fp;
    strcpy(filePath, fp.c_str());
}


// Getters
char* httpRequest :: getFilePath(){
    return(filePath);
}

string httpRequest :: getFileName(){
    return(fileName);
}


// Setter
void httpRequest :: setFileName(string fn){
    fileName = fn;
}
