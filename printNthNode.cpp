#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};


//Print linked list
void printList(struct Node* head){
    struct Node* currentNode = head;
    while(currentNode!=NULL){
        cout << currentNode->data <<endl;
        currentNode=currentNode->next;
    }
}

void insert(struct Node ** head , int data){
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data=data;
    node->next=(*head);
    (*head)=node;
}
//driver program
int main(){
    struct Node* head = NULL;
    insert(&head,1);
    insert(&head,4);
    insert(&head,1);
    insert(&head,12);
    insert(&head,1);
    printList(head);
    return 0;
}