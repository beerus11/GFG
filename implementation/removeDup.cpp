#include<iostream>
#define NO_OF_CHARS 256
using namespace std;

char *removeDup(char *str){
    bool bin_hash[NO_OF_CHARS] = {0};
    int ip_ind=0,res_ind=0;
    char temp;

    while(*(str+ip_ind)){
        temp= *(str+ip_ind);
        if(!bin_hash[temp]){
            bin_hash[temp]=true;
            *(str + res_ind) = *(str + ip_ind);
            res_ind++;
        }
        ip_ind++;
    }
    *(str+res_ind) = '\0';
    return str;
}

//driver program
int main(){
    char string[]= "geeksforgeeks";
    cout << removeDup(string);
    return 0;
}