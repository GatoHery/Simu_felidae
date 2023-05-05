#include <iostream>
#include "nodo.h"

using namespace::std;

//menus interactivos
void menu_tamaño(); //pregunta si el tamano del excel es adecuado para el trabajo
void menu_principal();

//funciones de apoyo
void insertarNodo();
void desplegarListaPU();

int op = 0;

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


    insertarNodo();
    insertarNodo();
    insertarNodo();
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
void insertarNodo(){
    fila1* nuevo = new fila1();
    cout << " Ingrese el dato que contendra el nuevo Nodo: ";
    cin >> nuevo->dato;

    if(primero1==NULL){
        primero1 = nuevo;
        primero1->siguiente = NULL;
        primero1->atras = NULL;
        ultimo1 = primero1;
    }else{
        ultimo1->siguiente = nuevo;
        nuevo->siguiente = NULL;
        nuevo->atras = ultimo1;
        ultimo1 = nuevo;
    }
    cout << "\n Nodo Ingresado\n\n";
}


void desplegarListaPU(){
    fila1* actual = new fila1();
    actual = primero1;
    if(primero1!=NULL){

        while(actual!=NULL){
            cout << "\n " << actual->dato;
            actual = actual->siguiente;
        }

    }else{
        cout << "\n La listas se encuentra Vacia\n\n";
    }
}
