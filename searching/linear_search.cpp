#include<iostream>
#include<algorithm>
using namespace std;
int search(int arr[] , int len , int e){
    for(int i=0;i<len;i++){
        if(arr[i]==e){
            return i;
        }
    }
    return -1;
}

//driver program
int main(){
    int array [] = {6,3,4,7,8,9,0,1,5};
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Eleement found at position :: " <<search(array,size,4);
    return 0;
}