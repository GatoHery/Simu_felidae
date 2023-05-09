#include <iostream>
#include "nodo.h"

using namespace::std;

//menus interactivos
void menu_tamaño(); //pregunta si el tamano del excel es adecuado para el trabajo
void menu_principal();

//funciones de apoyo

int op = 0;
int cont = 0;
string dato= "";

int main(){
    do{
        menu_principal();
        cin>>op;
        if(op == 1){ //se crea un nuevo archivo
            menu_tamaño();
            cin>> op;
            if(op == 1){
                return 0;
            }
            else if(op == 2){
                cont = 5;
                for(int i=0; i<cont;i++) {
                    dato = "|1| ";
                    insertarNodo(dato);
                    dato = "|2| ";
                    insertarNodo2(dato);
                    dato = "|3| ";
                    insertarNodo3(dato);
                    dato = "|4| ";
                    insertarNodo4(dato);
                    dato = "|5| ";
                    insertarNodo5(dato);
                }

                cout<<endl;
                desplegarListaPU();
                desplegarListaPU2();
                desplegarListaPU3();
                desplegarListaPU4();
                desplegarListaPU5();
            }else{
                return 0;
            }
        }
        else if(op == 2){ //se accede a un excel ya existente
            return 0;
        }else{
            return 0;
        }

    } while (op != 0);
    return 0;

    cout << "\n Lista Primero al ultimo\n";
    desplegarListaPU();

    return 0;
}
//-------Menus--------------
void menu_tamaño(){
    cout<<"----actualmente tu excel trabaja 5x5, desea agrandarlo?-----"<<endl;
    cout<<"1. si"<<endl;
    cout<<"2. no"<<endl;
    cout<<"respuesta: ";
}
void menu_principal(){
    cout<<"----Menu principal-----"<<endl;
    cout<<"1. Nueva hoja de calculo"<<endl;
    cout<<"2. Abrir hoja de calculo"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"respuesta: ";
}

//----------funciones-----------

