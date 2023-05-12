#include <iostream>
#include "nodo.h"
#include <ctype.h>

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
                    dato = "--|1|--*";
                    insertar(&head, dato);
                    dato = "--|2|--*";
                    insertar(&head2, dato);
                    dato = "--|3|--*";
                    insertar(&head3, dato);
                    dato = "--|4|--*";
                    insertar(&head4, dato);
                    dato = "--|5|--*";
                    insertar(&head5, dato);
                }

                //se ponen el ID, lo importante es el numero, la letra se cambia dentro de la funcion
                id="1A";
                agregarId(head,id);
                id="2A";
                agregarId(head2,id);
                id="3A";
                agregarId(head3,id);
                id="4A";
                agregarId(head4,id);
                id="5A";
                agregarId(head5,id);

                id="1A";

                //todas las acciones que realizara el usuario
                do{
                    //depliega toda la lista de 5x5
                    cout<<"|   A   ||   B   ||   C   ||   D   ||   E   |";
                    cout<<endl;
                    cout<<"1|";
                    desplegarLista(head);
                    cout<<endl;
                    cout<<"2|";
                    desplegarLista(head2);
                    cout<<endl;
                    cout<<"3|";
                    desplegarLista(head3);
                    cout<<endl;
                    cout<<"4|";
                    desplegarLista(head4);
                    cout<<endl;
                    cout<<"5|";
                    desplegarLista(head5);
                    cout<<endl;

                    menu_funciones(id);
                    cin>>opAux;
                    switch (opAux) {
                        case 1: //escribir en una celda-------------------------
                            cout<<"digite el dato"<<endl;
                            cin>>dato;
                            if(dato.length() <= 8){
                                while(dato.length() != 8){
                                    dato += " ";
                                }
                                switch (id[0]) {
                                    case '1':
                                        buscarId(head,id,dato);
                                        break;
                                    case '2':
                                        buscarId(head2,id,dato);
                                        break;
                                    case '3':
                                        buscarId(head3,id,dato);
                                        break;
                                    case '4':
                                        buscarId(head4,id,dato);
                                        break;
                                    case '5':
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
                        case 2: //posicionarse en una celda---------------------
                        cout<<"el id se trabaja primero usando un numero y luego la letra"<<endl;
                        cout<<"escriba la ubicacion: ";
                        cin>>id;
                        cout<<endl;
                        if(id.length() == 2 && isalpha(id[1])){
                            id[1] = toupper(id[1]);
                        }
                        else{
                            cout<<"formato no valido"<<endl;
                            id="1A";
                        }
                            break;
                        case 3: //copiar contenido de la celda-----------------------
                            switch (id[0]) {
                                case '1':
                                     portapapeles = buscarId(head,id);
                                     cout<<"contenido copiado: "<<portapapeles<<endl;
                                     cout<<endl;
                                    break;
                                case '2':
                                    portapapeles = buscarId(head2,id);
                                    cout<<"contenido copiado: "<<portapapeles<<endl;
                                    cout<<endl;
                                    break;
                                case '3':
                                    portapapeles = buscarId(head3,id);
                                    cout<<"contenido copiado: "<<portapapeles<<endl;
                                    cout<<endl;
                                    break;
                                case '4':
                                    portapapeles = buscarId(head4,id);
                                    cout<<"contenido copiado: "<<portapapeles<<endl;
                                    cout<<endl;
                                    break;
                                case '5':
                                    portapapeles = buscarId(head5,id);
                                    cout<<"contenido copiado: "<<portapapeles<<endl;
                                    cout<<endl;
                                    break;
                                default:
                                    cout<<"error en el ID"<<endl;
                            }
                            break;
                        case 4: //cortar contenido de la celda------------------
                            switch (id[0]) {
                                case '1':
                                    portapapeles = cortarDato(head,id);
                                    cout<<"contenido cortado: "<<portapapeles<<endl;
                                    cout<<endl;
                                    break;
                                case '2':
                                    portapapeles = cortarDato(head2,id);
                                    cout<<"contenido cortado: "<<portapapeles<<endl;
                                    cout<<endl;
                                    break;
                                case '3':
                                    portapapeles = cortarDato(head3,id);
                                    cout<<"contenido cortado: "<<portapapeles<<endl;
                                    break;
                                case '4':
                                    portapapeles = cortarDato(head4,id);
                                    cout<<"contenido cortado: "<<portapapeles<<endl;
                                    cout<<endl;
                                    break;
                                case '5':
                                    portapapeles = cortarDato(head5,id);
                                    cout<<"contenido cortado: "<<portapapeles<<endl;
                                    cout<<endl;
                                    break;
                                default:
                                    cout<<"error en el ID"<<endl;
                            }
                            break;
                        case 5: // pegar contenido---------------------------
                        cout<<"id: "<<id[0]<<endl;
                            if(portapapeles != ""){
                                switch (id[0]) {
                                    case '1':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        cout<<endl;
                                        break;
                                    case '2':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        cout<<endl;
                                        break;
                                    case '3':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        cout<<endl;
                                        break;
                                    case '4':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        cout<<endl;
                                        break;
                                    case '5':
                                        pegarDato(head,id,portapapeles);
                                        cout<<"contenido pegado: "<<portapapeles<<endl;
                                        cout<<endl;
                                        break;
                                    default:
                                        cout<<"error en el ID"<<endl;
                                }
                            }
                            else{
                                cout<<"Tu portapapeles esta vacio, imposible realizar esta accion"<<endl;
                                cout<<endl;
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

