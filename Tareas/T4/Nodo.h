#ifndef NODO_H
#define NODO_H


#include "string"
using namespace std;

class Nodo
{
    private:
        int carne;
        string nombre;
        
    public:
        //siguiente y anterior publicos para los pueda acceder
        //con facilidad la lista 
        Nodo *siguiente;
        Nodo *anterior;
        Nodo(int arg1,string arg2);
        int getCarne();
        string getNombre();
        ~Nodo();
};

#endif 
