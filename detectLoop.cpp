#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* newNode(int data){
    struct Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
}


void push(struct Node** head , int data){
    struct Node* node = newNode(data);
    node->next = *head;
    (*head)=node;
}


bool detectCycle(struct Node* head){
    struct Node* sp = head;
    struct Node* fp = head;
    while(sp!=NULL && fp!=NULL){
        sp=sp->next;
        fp=fp->next->next;
        if(sp==fp){
            return true;
        }
    }
    return false;
}

//driver program
int main(){
    struct Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    //loop
    head->next->next->next->next = head;

    if (detectCycle(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;
}