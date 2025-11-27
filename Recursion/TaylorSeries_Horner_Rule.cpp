#include <iostream>
#include <stdio.h>
using namespace std;

double e(int x,int n){
    static double S = 1;
    if(n == 0){
        return S;
    }
    S = (1+x*S/n);
    return e(x,n-1);
}

int main(){
    cout<< e(1,10);
    return 0;
}