#include <iostream>
#include <stdio.h>
using namespace std;

void funB(int n);   //We write this so we dont get function not declared error//
void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}

void funB(int n){
    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}

int main(){
    int x = 20;
    funA(x);
    return 0;
}