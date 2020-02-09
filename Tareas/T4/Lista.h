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
        void insertNodo(int arg1, string arg2);
        void printList();
        void deletNodo();
};


#endif