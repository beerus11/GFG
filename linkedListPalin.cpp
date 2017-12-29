#include<iostream>
#include<stack>
using namespace std;
struct Node {
    char data;
    struct Node* next;
};

struct Node* newNode(char data){
    struct Node* node = new Node();
    node->data = data;
    node->next = NULL;
}

void printList(struct Node* head){
    while(head!=NULL){
          cout << head->data;
          head=head->next;
    }
    cout <<endl;
}

bool checkPalin(struct Node* head , int len){
    struct Node* node = head;
    stack<char> mystack;
    while(node!=NULL){
        mystack.push(node->data);
        node=node->next;
    }
    node=head;
    while(node!=NULL){
        char temp =mystack.top();
        if(temp!=node->data)
            return false;
        node=node->next;
        mystack.pop();
    }
    return true;
}


int main(){
    char str[] = "MADAM";
    int len = sizeof(str)/sizeof(str[0]);
    struct Node* head = newNode(str[0]);
    head->next = newNode(str[1]);
    head->next->next = newNode(str[2]);
    head->next->next->next = newNode(str[3]);
    head->next->next->next->next = newNode(str[4]);
    printList(head);
    cout << "String is Palindrome :: " <<checkPalin(head,len);
    return 0;
}