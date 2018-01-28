#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* newNode(int data){
    struct Node* temp  = new Node();
    temp->data=data;
    temp->next=NULL;
    return temp;
}

Node* reverseLL(struct Node** node){
    struct Node* prev =  NULL;
    struct Node* curr = *node;
    struct Node* next ;
    while(curr!=NULL){
        next= curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void printLL(struct Node* node){
    struct Node* temp = node;
    while(temp!=NULL){
        cout << temp->data<<endl;
        temp=temp->next;
    }
}

//driver program
int main(){
    struct Node * head = newNode(5);
    head->next = newNode(6);
    head->next->next = newNode(7);
    head->next->next->next = newNode(8);
    printLL(head);
    cout << "Reversed LL"<<endl;
    printLL(reverseLL(&head));
    return 0;
}