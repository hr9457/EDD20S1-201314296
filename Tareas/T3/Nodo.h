#ifndef NODO_H
#define NODO_H

#include "string"

using namespace std;

class Nodo
{
	public:
		Nodo(int arg1, string arg2);
		Nodo *siguiente;
		int getCarne();
		string getNombre();
		~Nodo();
		
		
	protected:
		int carne;
		string nombre;
};

#endif
