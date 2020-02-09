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
void Lista::insertUltimo(char palabra){
    //creando un nodo temporal con los datos recibidos
    Nodo *temporal = new Nodo(palabra);
    if(statusList()==true){
        primero=temporal;
        ultimo=temporal;
    }else{
        ultimo->siguiente=temporal;
        temporal->anterior=ultimo;
        ultimo=temporal;
    }
}

//metodo para insertar al inicio
void Lista::insertPrimero(char palabra){
    //crando nodo temporal
    Nodo *temporal = new Nodo(palabra);
    if(statusList()==true){
        primero=temporal;
        ultimo=temporal;
    }else{
        primero->anterior=temporal;
        temporal->siguiente=primero;
        primero=temporal;
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
            cout<<"<---Palabra: "<<nodoAuxiliar->getPalabra()<<"--->"<<endl;
            nodoAuxiliar=nodoAuxiliar->siguiente;
        }
        getch();
    }
    
}

//metodo para eliminar al ultimo
void Lista::deletNodo(){
    if(statusList()==true){
        cout<<"no hay elemento en la lista"<<endl;
    }else if(primero==ultimo){
        primero=NULL;
        ultimo=NULL;
        cout<<"Elemento eliminado";
    }else{
        Nodo *nodoAuxiliar = ultimo->anterior;
        ultimo->anterior=NULL;
        nodoAuxiliar->siguiente=NULL;
        ultimo=nodoAuxiliar;        
    }
}

void Lista::Buscar(char arg1){
    if(statusList()==true){
        cout<<"No hay elemento en la lista"<<endl;
    }else{
        Nodo *nodoAuxiliar = primero; 
        while(nodoAuxiliar!=NULL){
            if(arg1==nodoAuxiliar->getPalabra()){
                cout<<"Concidencia en nodo con: "<<endl;
                cout<<"Nodo: "<<nodoAuxiliar->getPalabra()<<endl;
                getch();
                break;
            }
            nodoAuxiliar=nodoAuxiliar->siguiente;
        }
    }
}

Lista::~Lista(){    
}
