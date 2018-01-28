#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data){
    struct Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void printArray(int arr[], int len){
    for(int i=0;i<len;i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
}

void printPaths(struct Node* node , int paths[],int len){
        if(node==NULL)
            return;
        paths[len]=node->data;
        len++;
        if(node->left ==NULL && node->right ==NULL){
            printArray(paths,len);
        }
        if (node->left !=NULL){
            printPaths(node->left,paths,len);
        }
        if (node->right !=NULL){
            printPaths(node->right,paths,len);
        }
}

int main(){
    struct Node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5); 
    int arr[1000];
    printPaths(root,arr ,0);
    return 0;
}