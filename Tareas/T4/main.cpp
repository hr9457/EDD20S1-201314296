
#include <iostream>//libreria para entrada y salida en consola
#include "conio.h"//para uso de la propiedad getch
#include "windows.h"//para usar funciones de windows
#include "string"
#include "Nodo.h"
#include "Lista.h"


using namespace std;

int main(){
    int opMenu;
    int carne;
    string nombre;
    Lista List;
    do{
        system("cls");//para borrar en pantalla cuando repita el menu
        cout<<"--Menu--"<<endl;
        cout<<"1. Instear "<<endl;
        cout<<"2. Mostar "<<endl;
        cout<<"3. Eliminar"<<endl;
        cout<<"4. Salir"<<endl<<endl;
        cout<<"INGRESE LA OPCION QUE DESEE REALIZAR: ";
        cin>>opMenu;

        switch (opMenu)
        {
            case 1:
                cout<<"ingrese datos para agregar a la lista"<<endl;
                cout<<"Carne: ";
                cin>>carne;
                cout<<"Nombre: ";
                cin>>nombre;
                List.insertNodo(carne,nombre); 
                getch();
                break;

            case 2:
                cout<<"-----DATOS EN LA LISTA-----"<<endl;
                List.printList();
                break;

            case 3:
                cout<<"eliminacion de nodo"<<endl;
                getch();
                break;    
            
            default:
                cout<<"opcion invalida"<<endl;
                break;
        }

    }while(opMenu != 4);

    getch();//espera en consola al usuario teclee para seguir
    
    return 0;
}