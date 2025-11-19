#include <iostream>
#include <stdio.h>
using namespace std;

//Recursive Function
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

//Looping
int fact(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
    cout<<factorial(5)<<endl;
    cout<<fact(5)<<endl;
    return 0;
}
