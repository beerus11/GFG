#include<iostream>
#include<stdlib.h>
using namespace std;

/* Linked list node */
struct Node {
    int data;
    struct Node* next;
};

struct Node* push(struct Node** head, int data){
    struct Node* node = (struct Node*) malloc(sizeof(struct Node*));
    node->data=data;
    node->next= (*head);
    (*head) = node;
    return node;

}

int countRotation(struct Node* head){
    int count=0;
    while(head!=NULL && head->next !=NULL && head->data < head->next->data){
        count++;
        head=head->next;
    }
    return count+1;
}

void printList(struct Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main(){
    struct Node* head = NULL;

    push(&head, 12);
    push(&head, 11);
    push(&head, 8);
    push(&head, 5);
    push(&head, 18);
    push(&head, 15);
 
    printList(head);
    cout << endl;
    cout << "Linked list rotated elements: ";
 
    // Function call countRotation()
    cout << countRotation(head) << endl;
    return 0;
}