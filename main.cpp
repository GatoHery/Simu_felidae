#include <iostream>
#include "nodo.h"
#include <ctype.h>

using namespace::std;

//menus interactivos
void menu_tamaño(); //pregunta si el tamano del excel es adecuado para el trabajo
void menu_principal();
void menu_funciones(string id);

//datos de apoyo
int op = 0;
int opAux = 0;
int cont = 0;
int filas = 0;
int columnas = 0;

//datos auxiliares para el guardado de informacion
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
            if(op == 1){ //tamono personalziado
                cout<<"las dimensiones deben ser 6x6 o superior"<<endl;
                cout<<"numero de filas: "<<endl;
                cin>>filas;
                cout<<"numero de columnas: "<<endl;
                cin>>columnas;

                if((filas <= 5 and columnas <= 5) or (filas > 15 and columnas > 15)){
                    cout<<"ese tamano no esta permitido"<<endl;
                }
                else{ //se creara una lista en base a la filas existentes seguido del tamano de la columna
                    for(int i=1;i<=filas;i++){
                        if(i == 1){
                            for(int j=1;j<=columnas;j++){ //las columnas se usan para ver cuantos nodos tendra una lista
                                dato = "--|1|--*";
                                insertar(&head, dato);
                            }
                        }
                        else if(i == 2){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|2|--*";
                                insertar(&head2, dato);
                            }
                        }
                        else if(i == 3){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|3|--*";
                                insertar(&head3, dato);
                            }
                        }
                        else if(i == 4){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|4|--*";
                                insertar(&head4, dato);
                            }
                        }
                        else if(i == 5){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|5|--*";
                                insertar(&head5, dato);
                            }
                        }
                        else if(i == 6){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|6|--*";
                                insertar(&head6, dato);
                            }
                        }
                        else if(i == 7){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|7|--*";
                                insertar(&head7, dato);
                            }
                        }
                        else if(i == 8){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|8|--*";
                                insertar(&head8, dato);
                            }
                        }
                        else if(i == 9){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|9|--*";
                                insertar(&head9, dato);
                            }
                        }
                        else if(i == 10){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|10|-*";
                                insertar(&head10, dato);
                            }
                        }
                        else if(i == 11){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|11|-*";
                                insertar(&head11, dato);
                            }
                        }
                        else if(i == 12){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|12|-*";
                                insertar(&head12, dato);
                            }
                        }
                        else if(i == 13){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|13|-*";
                                insertar(&head13, dato);
                            }
                        }
                        else if(i == 14){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|14|-*";
                                insertar(&head14, dato);
                            }
                        }
                        else if(i == 15){
                            for(int j=1;j<=columnas;j++){
                                dato = "--|15|-*";
                                insertar(&head15, dato);
                            }
                        }
                    }
                    //agregando ID si existe la fila
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
                    id="6A";
                    agregarId(head6,id);

                    if(head7 != NULL){
                        id="7A";
                        agregarId(head7,id);
                    }
                    if(head8 != NULL){
                        id="8A";
                        agregarId(head8,id);
                    }
                    if(head9 != NULL){
                        id="9A";
                        agregarId(head9,id);
                    }
                    if(head10 != NULL){
                        id="10A";
                        agregarId(head10,id);
                    }
                    if(head11 != NULL){
                        id="11A";
                        agregarId(head11,id);
                    }
                    if(head12 != NULL){
                        id="12A";
                        agregarId(head12,id);
                    }
                    if(head13 != NULL){
                        id="13A";
                        agregarId(head13,id);
                    }
                    if(head14 != NULL){
                        id="14A";
                        agregarId(head14,id);
                    }
                    if(head15 != NULL){
                        id="15A";
                        agregarId(head15,id);
                    }
                    id="1A";

                    // mostar en pantalla toda la lista
                    do{
                        for(int i=1;i<=columnas;i++){
                            if(i == 1){
                                cout<<"  |   A   |";
                            }
                            if(i == 2){
                                cout<<"|   B   |";
                            }
                            if(i == 3){
                                cout<<"|   C   |";
                            }
                            if(i == 4){
                                cout<<"|   D   |";
                            }
                            if(i == 5){
                                cout<<"|   E   |";
                            }
                            if(i == 6){
                                cout<<"|   F   |";
                            }
                            if(i == 7){
                                cout<<"|   G   |";
                            }
                            if(i == 8){
                                cout<<"|   H   |";
                            }
                            if(i == 9){
                                cout<<"|   I   |";
                            }
                            if(i == 10){
                                cout<<"|   J   |";
                            }
                            if(i == 11){
                                cout<<"|   K   |";
                            }
                            if(i == 12){
                                cout<<"|   L   |";
                            }
                            if(i == 13){
                                cout<<"|   M   |";
                            }
                            if(i == 14){
                                cout<<"|   N   |";
                            }
                            if(i == 15){
                                cout<<"|   O   |";
                            }
                        }

                        cout<<endl;
                        cout<<" 1|";
                        desplegarLista(head);
                        cout<<endl;
                        cout<<" 2|";
                        desplegarLista(head2);
                        cout<<endl;
                        cout<<" 3|";
                        desplegarLista(head3);
                        cout<<endl;
                        cout<<" 4|";
                        desplegarLista(head4);
                        cout<<endl;
                        cout<<" 5|";
                        desplegarLista(head5);
                        cout<<endl;
                        cout<<" 6|";
                        desplegarLista(head6);

                        if(head7 != NULL){
                            cout<<endl;
                            cout<<" 7|";
                            desplegarLista(head7);
                        }
                        if(head8 != NULL){
                            cout<<endl;
                            cout<<" 8|";
                            desplegarLista(head8);
                        }
                        if(head9 != NULL){
                            cout<<endl;
                            cout<<" 9|";
                            desplegarLista(head9);
                        }
                        if(head10 != NULL){
                            cout<<endl;
                            cout<<"10|";
                            desplegarLista(head10);
                        }
                        if(head11 != NULL){
                            cout<<endl;
                            cout<<"11|";
                            desplegarLista(head11);
                        }
                        if(head12 != NULL){
                            cout<<endl;
                            cout<<"12|";
                            desplegarLista(head12);
                        }
                        if(head13 != NULL){
                            cout<<endl;
                            cout<<"13|";
                            desplegarLista(head13);
                        }
                        if(head14 != NULL){
                            cout<<endl;
                            cout<<"14|";
                            desplegarLista(head14);
                        }
                        if(head15 != NULL){
                            cout<<endl;
                            cout<<"15|";
                            desplegarLista(head15);
                        }

                        cout<<endl;
                        menu_funciones(id);
                        cin>>opAux;

                        switch (opAux){
                            case 1: //escribir en una celda-------------------------
                                cout<<"digite el dato"<<endl;
                                cin>>dato;
                                if(dato.length() <= 8){
                                    while(dato.length() != 8){
                                        dato += " ";
                                    }
                                    if(isalpha(id[2])){
                                        switch (id[1]) {
                                            case '0':
                                                cout<<"entro aqui"<<endl;
                                                buscarId(head10,id,dato);
                                                break;
                                            case '1':
                                                buscarId(head11,id,dato);
                                                break;
                                            case '2':
                                                buscarId(head12,id,dato);
                                                break;
                                            case '3':
                                                buscarId(head13,id,dato);
                                                break;
                                            case '4':
                                                buscarId(head14,id,dato);
                                                break;
                                            case '5':
                                                buscarId(head15,id,dato);
                                                break;
                                        }
                                    }
                                    else if(isalpha(id[1])){
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
                                            case '6':
                                                buscarId(head6,id,dato);
                                                break;
                                            case '7':
                                                buscarId(head7,id,dato);
                                                break;
                                            case '8':
                                                buscarId(head8,id,dato);
                                                break;
                                            case '9':
                                                buscarId(head9,id,dato);
                                                break;
                                            default:
                                                cout<<"error en el ID"<<endl;
                                        }
                                    }
                                    else{
                                        cout<<"algo salio mal"<<endl;
                                        break;
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
                                else if(id.length() == 3 && isalpha(id[2])){
                                    id[2] = toupper(id[2]);
                                }
                                else{
                                    cout<<"formato no valido"<<endl;
                                    id="1A";
                                }
                                break;
                            case 3: //copiar contenido de la celda-----------------------
                                if(id[2] != ' ' and isalpha(id[2])){
                                    switch (id[1]) {
                                        case '0':
                                            portapapeles = buscarId(head10,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '1':
                                            portapapeles = buscarId(head11,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '2':
                                            portapapeles = buscarId(head12,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '3':
                                            portapapeles = buscarId(head13,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '4':
                                            portapapeles = buscarId(head14,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '5':
                                            portapapeles = buscarId(head15,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                    }
                                }
                                else if(id[1] != ' ' and isalpha(id[1])){
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
                                        case '6':
                                            portapapeles = buscarId(head6,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '7':
                                            portapapeles = buscarId(head7,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '8':
                                            portapapeles = buscarId(head8,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '9':
                                            portapapeles = buscarId(head9,id);
                                            cout<<"contenido copiado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        default:
                                            cout<<"error en el ID"<<endl;
                                    }
                                }
                                else{
                                    cout<<"algo salio mal"<<endl;
                                    break;
                                }
                                break;
                            case 4: //cortar informacion-------------------
                                if(id[2] != ' ' and isalpha(id[2])){
                                    switch (id[1]) {
                                        case '0':
                                            portapapeles = cortarDato(head10,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '1':
                                            portapapeles = cortarDato(head11,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '2':
                                            portapapeles = cortarDato(head12,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '3':
                                            portapapeles = cortarDato(head13,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '4':
                                            portapapeles = cortarDato(head14,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '5':
                                            portapapeles = cortarDato(head15,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                    }
                                }
                                else if(id[1] != ' ' and isalpha(id[1])){
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
                                            cout<<endl;
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
                                        case '6':
                                            portapapeles = cortarDato(head6,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '7':
                                            portapapeles = cortarDato(head7,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '8':
                                            portapapeles = cortarDato(head8,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '9':
                                            portapapeles = cortarDato(head9,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        default:
                                            cout<<"error en el ID"<<endl;
                                    }
                                }
                                else{
                                    cout<<"algo salio mal"<<endl;
                                    break;
                                }
                                break;
                            case 5: //pegar informacion--------------------------------
                                if(id[2] != ' ' and isalpha(id[2])){
                                    switch (id[1]) {
                                        case '0':
                                            pegarDato(head10,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '1':
                                            pegarDato(head11,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '2':
                                            pegarDato(head12,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '3':
                                            pegarDato(head13,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '4':
                                            pegarDato(head14,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '5':
                                            pegarDato(head15,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                    }
                                }
                                else if(id[1] != ' ' and isalpha(id[1])){
                                    switch (id[0]) {
                                        case '1':
                                            pegarDato(head,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '2':
                                            pegarDato(head2,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '3':
                                            pegarDato(head4,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '4':
                                            pegarDato(head5,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '5':
                                            portapapeles = cortarDato(head5,id);
                                            cout<<"contenido cortado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '6':
                                            pegarDato(head6,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '7':
                                            pegarDato(head7,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '8':
                                            pegarDato(head8,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        case '9':
                                            pegarDato(head9,id,portapapeles);
                                            cout<<"contenido pegado: "<<portapapeles<<endl;
                                            cout<<endl;
                                            break;
                                        default:
                                            cout<<"error en el ID"<<endl;
                                    }
                                }
                                else{
                                    cout<<"algo salio mal"<<endl;
                                    break;
                                }
                                break;
                            case 6: //guardar archivo------------------------
                                cout<<"guardando archivo..."<<endl;
                                //agregar funcionaldidad de guardado-----------
                                cout<<"archivo guardado"<<endl;
                                break;
                            case 0: //salir del programa------------------
                                cout<<"saliendo del excel"<<endl;
                                break;
                            default:
                                cout<<"dato erroneo"<<endl;
                        }
                    }
                    while(opAux !=0);

                }
            }
            else if(op == 2){ //mantener 5x5-------------------------------------------------------
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
    cout<<"respuesta: ";
}

