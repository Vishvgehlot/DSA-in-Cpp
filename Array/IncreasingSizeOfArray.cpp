#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int *p,*q;
    p = new int [5] {1,2,3,4,5};
    
    cout<<"Array Before Increasing"<<endl;
    for(int i = 0; i < 5; i++)
        cout<<p[i]<<" ";

    q = new int [10];
    for(int i = 0; i < 5;i++)       // Copying the values from "p" array to "q" array
        q[i] = p[i];
    
    delete []p;                     // Delete the "p" array now
    p = q;                          // Make pointer "p" point to "q"
    q = NULL;                       // Make "q" pointer point to NULL.

    cout<<"\nArray Size After Increasing"<<endl;
    for(int i = 0; i < 10; i++)
        cout<<p[i]<<" ";

    delete []p;                     // Free the memory
    return 0;
}
