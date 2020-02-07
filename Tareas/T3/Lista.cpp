#include "Lista.h"
#include <conio.h>

//contructor de la lista
Lista::Lista()
{
	primero=ultimo=NULL;
}

bool Lista::vacio(){
	if(primero==NULL){
		return true;
	}else{
		return false;
	}
}

void Lista::agregar(int arg1,string arg2){
	Nodo *temporal = new Nodo(arg1,arg2);
	if(vacio()==true){
		primero=ultimo=temporal;
	}else{
		temporal->siguiente=primero;
		primero=temporal;
	}
}

void Lista::printList(){
	if(vacio()==true){
		cout<<"no hay elemento en la lista"<<endl;
		getch();
	}else{
		Nodo *aux = primero;
		cout<<"----Datos en la lista----"<<endl;
		while(aux!=NULL){
			cout<<"Carne: "<<aux->getCarne()<<"  Nombre: "<<aux->getNombre()<<endl;
			aux=aux->siguiente;
		}
		getch();
	}
}

void Lista::Search(int arg1){
	if(vacio()==true){
		cout<<"No hay elemento en la lista"<<endl;
		getch();
	}else{
		Nodo *auxBusqueda = primero;
		while(auxBusqueda!=NULL){
			if(auxBusqueda->getCarne()==arg1){
				cout<<"----Datos del Nodo Encontrado----"<<endl;
				cout<<"Carne: "<<auxBusqueda->getCarne()<<" Nombre: "<<auxBusqueda->getNombre()<<endl;
				break;
			}else{
				cout<<"----El valor no concide con ningun dato en la lista---";
			}
			
		}
		getch();		
	}
}

void Lista::delet(int arg1){
	if(vacio()==true){
		cout<<"No hay elemento en la lista"<<endl;
		getch();
	}else{
		if(primero==ultimo){
			primero=NULL;
			ultimo=NULL;
			cout<<"solo hay un elemento en la lista"<<endl;
			getch();
		}else{
			Nodo *auxBusqueda = primero;
			while(auxBusqueda != NULL){
				if(auxBusqueda->getCarne()==arg1){ 					
					ultimo=auxBusqueda;
					auxBusqueda->siguiente=NULL;
				}
			}
			getch();
		}
		
	}
}

Lista::~Lista()
{
}


