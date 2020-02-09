//importacio del header nodo
#include "Nodo.h"

//contructor y asignacion 
Nodo::Nodo(char arg1){
    /*
        asignando los argumentos
        a los valores de la lista
    */
    this->palabra = arg1;
    /*
        iniciando sus apuntadores del
        nodo a null
    */ 
    siguiente = NULL;
    anterior = NULL;
}

char Nodo::getPalabra(){
    return palabra;
}

Nodo::~Nodo(){
}


