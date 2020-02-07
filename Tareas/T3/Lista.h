#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"//importacion de los nodos hacia la lista
#include <string>
#include <iostream>

using namespace std;

class Lista
{
	public:
		Lista();
		bool vacio();
		void agregar(int arg1, string arg2);
		void printList();
		void Search(int arg1);
		void delet(int arg1);
		~Lista();
		
	protected:
		Nodo *primero;
		Nodo *ultimo;
		
};

#endif
