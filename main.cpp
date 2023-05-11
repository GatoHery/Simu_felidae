#include <iostream>
#include "nodo.h"

using namespace::std;

//menus interactivos
void menu_tamaño(); //pregunta si el tamano del excel es adecuado para el trabajo
void menu_principal();
void menu_funciones();

//funciones de apoyo
void posicion(string ubicacion);

int op = 0;
int opAux = 0;
int cont = 0;
string dato= "";
string ubicacion = "";
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
            else if(op == 2){
                cont = 5;
                for(int i=0; i<cont;i++) {
                    dato = "|1| ";
                    insert_front(&head, dato);
                    dato = "|2| ";
                    insert_front(&head2, dato);
                    dato = "|3| ";
                    insert_front(&head3, dato);
                    dato = "|4| ";
                    insert_front(&head4, dato);
                    dato = "|5| ";
                    insert_front(&head5, dato);
                }
                cout<<endl;
                displayList(head);
                cout<<endl;
                displayList(head2);
                cout<<endl;
                displayList(head3);
                cout<<endl;
                displayList(head4);
                cout<<endl;
                displayList(head5);


                do{
                    cout<<endl;
                    menu_funciones();
                    cin>>opAux;
                    switch (opAux) {
                        case 1: //escribir en una celda
                            cout<<"digite el dato"<<endl;
                            cin>>dato;
                            if(dato.length() == 8){
                                cout<<"se ha escrito el dato"<<endl;
                                //accion de meter el valor (pendiente)------------------------
                            }
                            else{
                                cout<<"el dato ingresado es mas grande de lo permitido"<<endl;
                            }
                            break;
                        case 2: //posicionarse en una celda
                        cout<<"escriba la ubicacion"<<endl;
                        cin>>ubicacion;
                        if(ubicacion.length() == 2){
                            //agregar accion de navegacion entre nodos----------------------
                            posicion(ubicacion);
                        }
                        else{
                            cout<<"tamano no valido"<<endl;
                        }
                            break;
                        case 3: //copiar contenido de la celda
                            break;
                        case 4: //cortar contenido de la celda
                            break;
                        case 5: // pegar contenido

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

void menu_funciones(){
    cout<<"------Menu de acciones----------"<<endl;
    cout<<"1. Escribir en una celda"<<endl;
    cout<<"2. Posicionarse en una celda"<<endl;
    cout<<"3. Copiar el contenido de la celda"<<endl;
    cout<<"4. Cortar el contenido de la celda"<<endl;
    cout<<"5. Pegar el contenido del clipboard en la celda"<<endl;
    cout<<"6. Guardar hoja de calculo"<<endl;
    cout<<"0. Salir de la hoja de calculo"<<endl;
}
//----------funciones-----------
void posicion(string ubicacion){ //buscar entre todos los nodos hasta encontrar el id correcto
    cout<<"ubicacion actual: "<<ubicacion<<endl;
}

void copiar(){

}

void cortar(){

}

void pegar(){

}
