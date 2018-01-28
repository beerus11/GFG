#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void insertAtFront(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

//Print linked list
void printList(struct Node* head){
    struct Node* currentNode = head;
    while(currentNode!=NULL){
        cout << currentNode->data <<endl;
        currentNode=currentNode->next;
    }
}

int main(){
    struct Node* head = NULL;
    insertAtFront(&head, 1);
    insertAtFront(&head, 4);
    insertAtFront(&head, 1);
    insertAtFront(&head, 12);
    insertAtFront(&head, 1);  
    printList(head);
    return 0;
}