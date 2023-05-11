#include <iostream>
using namespace std;
struct fila {
    int id;
    string dato;
    struct fila *prev;
    struct fila *next;
};
struct fila* head = NULL;

void insert(string dato) {
    struct fila* nuevo = (struct fila*) malloc(sizeof(struct fila));
    nuevo->dato = dato;
    nuevo->prev = NULL;
    nuevo->next = head;
    if(head != NULL)
        head->prev = nuevo ;
    head = nuevo;
}
void display(fila* head) {
    struct fila* ptr;
    ptr = head;
    while(ptr != NULL) {
        cout<< ptr->dato <<" ";
        ptr = ptr->next;
    }
}