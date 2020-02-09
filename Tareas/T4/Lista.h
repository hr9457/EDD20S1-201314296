#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include "string"
#include "iostream"
#include "conio.h"


using namespace std;

class Lista
{
    protected:
        Nodo *primero;
        Nodo *ultimo;
        
    public:
        Lista();
        bool statusList();
        void insertUltimo(char palabra);
        void insertPrimero(char palabra);
        void printList();
        void deletNodo();
        void Buscar(char arg1);
        ~Lista();
};


#endif