#pragma once
#include <iostream>
using namespace::std;

//conjunto de todas las estructuras doblemente enlazadas

//--------------------------------------------------------
struct fila1{
    string id;
    string dato;
    fila1* siguiente;
    fila1* atras;
} *primero1, *ultimo1;

void insertarNodo(string dato){
    fila1* nuevo = new fila1();
    nuevo->dato = "|1| ";

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
    cout << "Nodo Ingresado\n";
}

void desplegarListaPU(){
    fila1* actual = new fila1();
    actual = primero1;
    if(primero1!=NULL){

        while(actual!=NULL){
            cout << actual->dato << " ";
            actual = actual->siguiente;
        }
        cout<<endl;
    }else{
        cout << "La listas se encuentra Vacia\n";
    }
}

//--------------------------------------------------------------
struct fila2{
    string id;
    string dato;
    fila2* siguiente;
    fila2* atras;
} *primero2, *ultimo2;

void insertarNodo2(string dato){
    fila2* nuevo2 = new fila2();
    nuevo2->dato = "|2| ";

    if(primero2==NULL){
        primero2 = nuevo2;
        primero2->siguiente = NULL;
        primero2->atras = NULL;
        ultimo2 = primero2;
    }else{
        ultimo2->siguiente = nuevo2;
        nuevo2->siguiente = NULL;
        nuevo2->atras = ultimo2;
        ultimo2 = nuevo2;
    }
    cout << "Nodo Ingresado\n";
}

void desplegarListaPU2(){
    fila2* actual2 = new fila2();
    actual2 = primero2;
    if(primero1!=NULL){

        while(actual2!=NULL){
            cout << actual2->dato << " ";
            actual2 = actual2->siguiente;
        }
        cout<<endl;
    }else{
        cout << "La listas se encuentra Vacia\n";
    }
}

//--------------------------------------------------------
struct fila3{
    string id;
    string dato;
    fila3* siguiente;
    fila3* atras;
} *primero3, *ultimo3;

void insertarNodo3(string dato){
    fila3* nuevo3 = new fila3();
    nuevo3->dato = "|3| ";

    if(primero3==NULL){
        primero3 = nuevo3;
        primero3->siguiente = NULL;
        primero3->atras = NULL;
        ultimo3 = primero3;
    }else{
        ultimo3->siguiente = nuevo3;
        nuevo3->siguiente = NULL;
        nuevo3->atras = ultimo3;
        ultimo3 = nuevo3;
    }
    cout << "Nodo Ingresado\n";
}

void desplegarListaPU3(){
    fila3* actual3 = new fila3();
    actual3 = primero3;
    if(primero3!=NULL){

        while(actual3!=NULL){
            cout << actual3->dato << " ";
            actual3 = actual3->siguiente;
        }
        cout<<"\n";
    }else{
        cout << "La listas se encuentra Vacia\n";
    }
}

//--------------------------------------------------------
struct fila4{
    string id;
    string dato;
    fila4* siguiente;
    fila4* atras;
} *primero4, *ultimo4;

void insertarNodo4(string dato){
    fila4* nuevo4 = new fila4();
    nuevo4->dato = "|4| ";

    if(primero4==NULL){
        primero4 = nuevo4;
        primero4->siguiente = NULL;
        primero4->atras = NULL;
        ultimo4 = primero4;
    }else{
        ultimo4->siguiente = nuevo4;
        nuevo4->siguiente = NULL;
        nuevo4->atras = ultimo4;
        ultimo4 = nuevo4;
    }
    cout << "Nodo Ingresado\n";
}

void desplegarListaPU4(){
    fila4* actual4 = new fila4();
    actual4 = primero4;
    if(primero4!=NULL){

        while(actual4!=NULL){
            cout << actual4->dato << " ";
            actual4 = actual4->siguiente;
        }
        cout<<"\n";
    }else{
        cout << "La listas se encuentra Vacia\n";
    }
}

//--------------------------------------------------------
struct fila5{
    string id;
    string dato;
    fila5* siguiente;
    fila5* atras;
} *primero5, *ultimo5;

void insertarNodo5(string dato){
    fila5* nuevo5 = new fila5();
    nuevo5->dato = dato;

    if(primero5==NULL){
        primero5 = nuevo5;
        primero5->siguiente = NULL;
        primero5->atras = NULL;
        ultimo5 = primero5;
    }else{
        ultimo5->siguiente = nuevo5;
        nuevo5->siguiente = NULL;
        nuevo5->atras = ultimo5;
        ultimo5 = nuevo5;
    }
    cout << "Nodo Ingresado\n";
}

void desplegarListaPU5(){
    fila5* actual5 = new fila5();
    actual5 = primero5;
    if(primero5!=NULL){

        while(actual5!=NULL){
            cout << actual5->dato << " ";
            actual5 = actual5->siguiente;
        }
        cout<<"\n";
    }else{
        cout << "La listas se encuentra Vacia\n";
    }
}
