#include <iostream>
#include <stdio.h>
using namespace std;

int func(int n){
    if(n > 0){
        return func(n-1)+n;
    }
}

int main(){
    cout<<func(5);
    return 0;
}