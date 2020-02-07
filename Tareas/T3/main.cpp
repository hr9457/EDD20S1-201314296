#include <iostream>//lectura y escritura
#include <string>//para manejo de string
#include "Lista.h"//importacion de la lista
#include "windows.h"//para operacion de consola
#include "conio.h"//para usar la pausas en consola

using namespace std;


int main() {
	int op,carne,carneSearch;
	string nombre;
	Lista list;
	do{
		system("cls");//limpia la consola
		cout<<"--------MENU-------"<<endl;
		cout<<"----1. Insertar----"<<endl;
		cout<<"----2. Eliminar----"<<endl;
		cout<<"----3. Buscar------"<<endl;
		cout<<"----4. Mostrar-----"<<endl;
		cout<<"----5. Salir-------"<<endl<<endl;
		
		cout<<"Ingrese la opcion que desee realizar: ";
		cin>>op;		
		
		switch(op){
			case 1:
				cout<<"Ingrese su numero de carne : ";
				cin>>carne;
				cout<<"Ingrese su Nombre: ";
				cin>>nombre;
				list.agregar(carne,nombre);				
				break;
				
			case 2:
				cout<<"Ingrese su numero de carne :";
				cin>>carneSearch;
				list.delet(carneSearch);
				break;
				
			case 3:
				cout<<"Ingrese un numero de carne: ";
				cin>>carneSearch;
				list.Search(carneSearch);
				break;
				
			case 4:
				list.printList();
				break;	
				
			default: 
				cout<<"opcion invalida"<<endl;
				getch();
		}
		
	} while(op != 5 );
	
	return 0;
}
