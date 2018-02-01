#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};
//print linked-list
void printList(struct Node* node){
    while(node!=NULL){
        cout << node->data;
        node=node->next;
    }
}
//insert node at beginning
void insertAtFront(struct Node** head , int data){
    struct Node* node = new Node();
    node->data = data;
    node->next = (*head);
    (*head) = node;
}

//insert middle
void insertMiddleNodeAtFirst(struct Node** head){
    struct Node* sp=(*head);
    struct Node* fp=(*head);
    struct Node* prev=NULL;
    while(fp!=NULL && fp->next!=NULL && fp->next->next!=NULL){
        fp=fp->next->next;
        prev=sp;
        sp=sp->next;
    }
    prev->next=sp->next;
    sp->next=(*head);
    (*head)=sp;
}

int main(){
    struct Node* head = NULL;
    insertAtFront(&head, 1);
    insertAtFront(&head, 2);
    insertAtFront(&head, 3);
    insertAtFront(&head, 4);
    insertAtFront(&head, 5); 
    printList(head);
    cout<<endl;
    insertMiddleNodeAtFirst(&head); 
    printList(head);
    return 0;
}