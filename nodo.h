#include <iostream>
using namespace std;

struct Node {
    string id = "0";
    string data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;
struct Node* head2 = NULL;
struct Node* head3 = NULL;
struct Node* head4 = NULL;
struct Node* head5 = NULL;

void insertar(struct Node** head, string new_data)
{
    //allocate memory for New node
    struct Node* newNode = new Node;

    //assign data to new node
    newNode->data = new_data;

    //new node is head and previous is null, since we are adding at the front
    newNode->next = (*head);
    newNode->prev = NULL;

    //previous of head is new node
    if ((*head) != NULL)
        (*head)->prev = newNode;

    //head points to new node
    (*head) = newNode;
}

void desplegarLista(struct Node* node) {
    struct Node* last;

    while (node != NULL) {
        cout<<node->data;
        cout<<" ";
        last = node;
        node = node->next;
    }
}

void buscarId(struct Node* node,string id,string dato) {
    struct Node* last;

    while (node != NULL) {
        if(node->id == id){
            node->data = dato;
            cout<<"se ha escrito el dato"<<endl;
            last = node;
            node = node->next;
        }
        else{
            last = node;
            node = node->next;
        }
    }
}
//borrar el dato almacenado para pasarlo al clipboard
string cortarDato(struct Node* node,string id) {
    struct Node* last;
    string aux="";

    while (node != NULL) {
        if(node->id == id){
            cout<<"dato cortado"<<endl;
            aux = node->data;
            node->data = "|-| ";
            return aux;
        }
        else{
            last = node;
            node = node->next;
        }
    }
    return "";
}

void pegarDato(struct Node* node,string id,string dato) {
    struct Node* last;

    while (node != NULL) {
        if(node->id == id){
            cout<<"dato pegado"<<endl;
            node->data = dato;
            last = node;
            node = node->next;
        }
        else{
            last = node;
            node = node->next;
        }
    }
}

string buscarId(struct Node* node,string id) {
    struct Node* last;

    while (node != NULL) {
        if(node->id == id){
            cout<<"dato copiado"<<endl;
            return node->data;
        }
        else{
            last = node;
            node = node->next;
        }
    }
    return "";
}

void agregarId(struct Node* node,string id) {
    struct Node* last;
    int cont = 1;
    while (node != NULL) {
        switch(cont){
            case 1:
                id[1] = 'A';
                node->id= id;
                last = node;
                node = node->next;
                cont+=1;
                break;
            case 2:
                id[1] = 'B';
                node->id= id;
                last = node;
                node = node->next;
                cont+=1;
                break;
            case 3:
                id[1] = 'C';
                node->id= id;
                last = node;
                node = node->next;
                cont+=1;
                break;
            case 4:
                id[1] = 'D';
                node->id= id;
                last = node;
                node = node->next;
                cont+=1;
                break;
            case 5:
                id[1] = 'E';
                node->id= id;
                last = node;
                node = node->next;
                cont+=1;
                break;
            default:
                cout<<"algo salio mal"<<endl;
        }
            }
    }