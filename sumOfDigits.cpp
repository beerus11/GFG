#include<iostream>
using namespace std;

int sum(int no){
    if(no%10==no){
        return no;
    }

    return sum(no/10)+(no%10);
}
//driver program
int main(){
    cout << sum(687);
    return 0;
}