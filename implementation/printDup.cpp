#include<iostream>
# define NO_OF_CHARS 256
using namespace std;
void printDup(char *str){
    bool bin_hash[NO_OF_CHARS] ={0};
    while(*str){
        if(!bin_hash[*str]){
            bin_hash[*str]=true;
        }else{
            cout << *str <<endl;
        }
        str++;
    }
}

/**
 * Driver program
 * */

int main(){
    char string[]="geeksforgeeks";
    printDup(string);
    return 0;
}
 