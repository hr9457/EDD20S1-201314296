#include "Nodo.h"

Nodo::Nodo(int arg1,string arg2)
{
	this->carne=arg1;
	this->nombre=arg2;
	siguiente=NULL;
}

int Nodo::getCarne(){
	return carne;
}

string Nodo::getNombre(){
	return nombre;
}


Nodo::~Nodo()
{
}




