#include<iostream>
#include<string.h>
using namespace std;

void swap(char *a , char *b){
    char  temp = *a;
    *a= *b;
    *b=temp;
}

void permute(char *str, int l, int r){
    int i;
    if(l == r)
        cout << str<<endl;
    else{
        for(i=l;i<=r;i++){
            swap((str+l),(str+i));
            permute(str,(l+1),r);
            swap((str+l),(str+i));
        }
    }
}

//driver program
int main(){
    char str[]="Anurag";
    int n = strlen(str);
    permute(str,0,n-1);
    return 0;
}