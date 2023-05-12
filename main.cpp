#include <iostream>
#include "nodo.h"

using namespace::std;

//menus interactivos
void menu_tamaño(); //pregunta si el tamano del excel es adecuado para el trabajo
void menu_principal();
void menu_funciones(string id);

//funciones de apoyo

int op = 0;
int opAux = 0;
int cont = 0;

string id="";
string dato= "";
string portapapeles = "";

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
            else if(op == 2){ //mantener 5x5
                cont = 5;
                for(int i=0; i<cont;i++) { //se insertan los nodos con datos
                    dato = "|1| ";
                    insertar(&head, dato);
                    dato = "|2| ";
                    insertar(&head2, dato);
                    dato = "|3| ";
                    insertar(&head3, dato);
                    dato = "|4| ";
                    insertar(&head4, dato);
                    dato = "|5| ";
                    insertar(&head5, dato);
                }

                //se ponen el ID, lo importante es la letra, el numero se cambia dentro de la funcion
                id="A0";
                agregarId(head,id);
                id="B0";
                agregarId(head2,id);
                id="C0";
                agregarId(head3,id);
                id="D0";
                agregarId(head4,id);
                id="E0";
                agregarId(head5,id);
                id="A1";

                //todas las acciones que realizara el usuario
                do{
                    //depliega toda la lista de 5x5
                    cout<<endl;
                    desplegarLista(head);
                    cout<<endl;
                    desplegarLista(head2);
                    cout<<endl;
                    desplegarLista(head3);
                    cout<<endl;
                    desplegarLista(head4);
                    cout<<endl;
                    desplegarLista(head5);
                    cout<<endl;

                    menu_funciones(id);
                    cin>>opAux;
                    switch (opAux) {
                        case 1: //escribir en una celda
                            cout<<"digite el dato"<<endl;
                            cin>>dato;
                            if(dato.length() <= 8){
                                switch (id[0]) {
                                    case 'A':
                                        buscarId(head,id,dato);
                                        break;
                                    case 'B':
                                        buscarId(head2,id,dato);
                                        break;
                                    case 'C':
                                        buscarId(head3,id,dato);
                                        break;
                                    case 'D':
                                        buscarId(head4,id,dato);
                                        break;
                                    case 'E':
                                        buscarId(head5,id,dato);
                                        break;
                                    default:
                                        cout<<"error en el ID"<<endl;
                                }
                            }
                            else{
                                cout<<"el dato ingresado es mas grande de lo permitido"<<endl;
                            }
                            break;
                        case 2: //posicionarse en una celda----------------
                        cout<<"escriba la ubicacion"<<endl;
                        cin>>id;
                        if(id.length() == 2){
                            id[0] = toupper(id[0]);
                        }
                        else{
                            cout<<"tamano no valido"<<endl;
                            id="A1";
                        }
                            break;
                        case 3: //copiar contenido de la celda-----------------------
                            switch (id[0]) {
                                case 'A':
                                     portapapeles = buscarId(head,id);
                                     cout<<"contenido copiado: "<<portapapeles<<endl;
                                    break;
                                case 'B':
                                    portapapeles = buscarId(head2,id);
                                    break;
                                case 'C':
                                    portapapeles = buscarId(head3,id);
                                    break;
                                case 'D':
                                    portapapeles = buscarId(head4,id);
                                    break;
                                case 'E':
                                    portapapeles = buscarId(head5,id);
                                    break;
                                default:
                                    cout<<"error en el ID"<<endl;
                            }
                            break;
                        case 4: //cortar contenido de la celda------------------
                            switch (id[0]) {
                                case 'A':
                                    portapapeles = cortarDato(head,id);
                                    cout<<"contenido cortado: "<<portapapeles<<endl;
                                    break;
                                case 'B':
                                    portapapeles = cortarDato(head2,id);
                                    break;
                                case 'C':
                                    portapapeles = cortarDato(head3,id);
                                    break;
                                case 'D':
                                    portapapeles = cortarDato(head4,id);
                                    break;
                                case 'E':
                                    portapapeles = cortarDato(head5,id);
                                    break;
                                default:
                                    cout<<"error en el ID"<<endl;
                            }
                            break;
                        case 5: // pegar contenido---------------------------
                            if(portapapeles != ""){
                                switch (id[0]) {
                                    case 'A':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        break;
                                    case 'B':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        break;
                                    case 'C':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        break;
                                    case 'D':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        break;
                                    case 'E':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        break;
                                    default:
                                        cout<<"error en el ID"<<endl;
                                }
                            }
                            else{
                                cout<<"Tu portapapeles esta vacio, imposible realizar esta accion"<<endl;
                            }
                            break;
                        case 6: //guardar archivo
                            cout<<"guardando archivo..."<<endl;
                            //agregar funcionaldidad de guardado-----------
                            cout<<"archivo guardado"<<endl;
                            break;
                        case 0:
                            cout<<"saliendo del excel"<<endl;
                            break;
                        default:
                            cout<<"dato erroneo"<<endl;
                            break;
                    }
                } while(opAux !=0);
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

void menu_funciones(string id){
    cout<<"--------------------------------"<<endl;
    if(portapapeles != ""){
        cout<<"Clipboard: "<<portapapeles<<endl;
    }
    cout<<"posicion actual: "<<id<<endl;
    cout<<"------Menu de acciones----------"<<endl;
    cout<<"1. Escribir en una celda"<<endl;
    cout<<"2. Posicionarse en una celda"<<endl;
    cout<<"3. Copiar el contenido de la celda"<<endl;
    cout<<"4. Cortar el contenido de la celda"<<endl;
    cout<<"5. Pegar el contenido del clipboard en la celda"<<endl;
    cout<<"6. Guardar hoja de calculo"<<endl;
    cout<<"0. Salir de la hoja de calculo"<<endl;
}

