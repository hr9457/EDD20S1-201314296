#include "Lista.h"

//metodo contructor
Lista::Lista(){
    primero =ultimo = NULL;
}

//devuleve si la lista se encuentra algun nodo insertado
bool Lista::statusList(){
    if(primero==NULL && ultimo==NULL){
        return true;//no hay elementos
    }else{
        return false;//hay elementos 
    }
}

//meotodo para inster nodo al final de la lista
void Lista::insertNodo(int carne, string nombre){
    //creando un nodo temporal con los datos recibidos
    Nodo *temporal = new Nodo(carne,nombre);
    if(statusList()==true){
        primero=temporal;
        ultimo=temporal;
    }else{
        ultimo->siguiente=temporal;
        temporal->anterior=ultimo;
        ultimo=temporal;
    }
}

//metodo para imprimir los datos de la lista
void Lista::printList(){
    if(statusList()==true){
        cout<<"No hay elementos en la lista"<<endl;
        getch();
    }else{
        Nodo *nodoAuxiliar = primero;
        while(nodoAuxiliar!=NULL){
            cout<<"<---Carne: "<<nodoAuxiliar->getCarne()
                <<" Nombre: "<<nodoAuxiliar->getNombre()<<"--->"<<endl;
            nodoAuxiliar=nodoAuxiliar->siguiente;
        }
        getch();
    }
    
}

void Lista::deletNodo(){
}
