#include <iostream>
using namespace std;
int rotate(int *arr, int len, int d){
    while(d--){
        int temp = arr[0];
        for(int i=1;i<len;i++){
            arr[i-1]=arr[i];
        }   
        arr[len-1]=temp;
    }
}

int printArray(int *arr , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
//driver program
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    rotate(arr,size,2);
    printArray(arr,size);
}