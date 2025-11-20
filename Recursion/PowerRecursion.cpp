#include <iostream>
#include <stdio.h>
using namespace std;

//This power function is made such that it multiplies 2*2*2 ..... (n-1)times * 2
//So we write it as 2*[(n-1) times 2 ]* 2
int pow(int m , int n){
    if(n == 0)
        return 1;
    return pow(m,n-1)*2;
}

//In the above function it took as "n" multiples i.e "n" stack and n space, so now we try to do it in less stacks
// What we do it make it such that if its 2^9 = 2*(2^2)^4 so we just halfed the multiplications
int powv2(int m ,int n){
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return powv2(m*m,n/2);
    else
        return m*powv2(m*m,(n-1)/2);
}

int main(){
    cout << pow(2,4)<< endl;
    cout << powv2(2,5);
    return 0;
}