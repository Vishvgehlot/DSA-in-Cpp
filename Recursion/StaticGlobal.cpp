#include <iostream>
#include <stdio.h>
using namespace std;

int func(int n){
    static int x = 0;
    if(n > 0){
        x++;
        return func(n-1)+x;
    }
}

int main(){
    cout<<func(5);
    return 0;
}