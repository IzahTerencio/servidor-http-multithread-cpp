/*
*  NOME DO ARQUIVO: httprequest.h
*  DATA: 2022-04-06
*  AUTOR: Izabella Terêncio da Silva Assis / izahterencio@gmail.com
*  DESCRIÇÃO: Arquivo de cabeçalho da classe responsável por processamento de requisições.
*/

#ifndef HTTPREQUEST_H_INCLUDED
#define HTTPREQUEST_H_INCLUDED

#include <iostream>
#include <string.h>    // Para usar função bzero()

class httpRequest{

    public:
        httpRequest();
        httpRequest(std::string fp);
        char* getFilePath();
        std::string getFileName();
        void setFileName(std::string fn);
        // TODO enterDirectory();
        // TODO findFile();
        // TODO processRequest();


    private:
        char filePath[1024];
        std::string fileName;


};

#endif // HTTPREQUEST_H_INCLUDED
