#include <iostream>
using namespace std;

struct Node {
    string data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;
struct Node* head2 = NULL;
struct Node* head3 = NULL;
struct Node* head4 = NULL;
struct Node* head5 = NULL;

void insert_front(struct Node** head, string new_data)
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

void displayList(struct Node* node) {
    struct Node* last;

    while (node != NULL) {
        cout<<node->data;
        last = node;
        node = node->next;
    }
}