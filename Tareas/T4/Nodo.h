#ifndef NODO_H
#define NODO_H


#include "string"
using namespace std;

class Nodo
{
    private:
        char palabra;
        
    public:
        //siguiente y anterior publicos para los pueda acceder
        //con facilidad la lista 
        Nodo *siguiente;
        Nodo *anterior;
        Nodo(char arg1);
        char getPalabra();
        ~Nodo();
};

#endif 
