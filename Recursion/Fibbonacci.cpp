#include <iostream>
#include <stdio.h>
using namespace std;

//This is normal fibbonacci with recursion
int fib1(int n){
    if(n <= 1){
        return n;
    }
    return fib1(n-2)+fib1(n-1);
}

//The problem with normal fibbonacci is that the time complexity is close to 2^n, the prblm with the above fibbo is it calculates the same value of fib again and again i.e if you need to calculate fib(3) for fib(4) and fib(3) need fib(1),fib(2),fib(3) it will calculate it all again but in the new apporach i.e Memorization Fibbonacci we store these values in an array and before computing a fib we check if it exists in the array and if it exists we take it out from it and if it doesnt we compute it....... By using this we can drop the Time Complexity to O(n).

//Fibbonaci Recrusion with Memorization
int F[10];
int fib2(int n){
    if(n <= 1){
        F[n] = n;
        return n;
    }else{
        if(F[n-2] == -1){
            F[n-2] = fib2(n-2);
        }if(F[n-1] == -1){
            F[n-1] = fib2(n-1);
        }
        return F[n-2] + F[n-1];
    }
}

int main(){
    for(int i = 0; i<10; i++)
        F[i] = -1;
    cout<<fib1(5)<<endl;
    cout<<fib2(5);
    return 0;
}