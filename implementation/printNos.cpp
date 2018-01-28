#include<iostream>
using namespace std;

void printNos(int n){
    if(n>0){
        printNos(n-1);
        cout << n <<endl;
    }
    return;
}
//driver program
int main(){
    printNos(100);
}