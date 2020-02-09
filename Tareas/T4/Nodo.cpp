//importacio del header nodo
#include "Nodo.h"

//contructor y asignacion 
Nodo::Nodo(int arg1,string arg2){
    /*
        asignando los argumentos
        a los valores de la lista
    */
    this->carne = arg1;
    this->nombre = arg2;
    /*
        iniciando sus apuntadores del
        nodo a null
    */ 
    siguiente = NULL;
    anterior = NULL;
}

int Nodo::getCarne(){
    return carne;
}

string Nodo::getNombre(){
    return nombre;
}

Nodo::~Nodo(){
}


