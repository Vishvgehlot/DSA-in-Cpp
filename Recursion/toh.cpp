#include <iostream>
#include <stdio.h>
using namespace std;

void toh(int n,char A,char B,char C){
    if(n > 0){
        toh(n-1,A,C,B);
        cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;
        toh(n-1,B,A,C);
    }
}

int main(){
    toh(3,'A','B','C');
    return 0;
}