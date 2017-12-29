#include<iostream>
using namespace std;

bool isLucky(int n){
    static int counter = 2;
    if(counter > n)
        return true;
    if(n%counter==0)
        return false;
    return isLucky(n-(n/counter++));
}

//Driver program
int main(){
    int x=19;
    if(isLucky(x))
        cout << "Lucky !"<<endl;
    else
        cout << "Not Lucky !"<<endl;
    return 0;
}