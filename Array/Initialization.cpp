#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int A[5];                   // All Garbage Values
    int B[5] = {1,2,3,4,5};     // All Values Assigned
    int C[5] = {1,2};           // First 2 Values are others are "0" not garbage values
    int D[5] = {0};             // All values are "0"
    int E[] = {1,2,3,4,5,6};    // Variable size array, depends on the size of the values 

    int *P;                     
    P = new int [5];            // Creating Array in Heap
    P[0] = 1;


    for(int i = 0; i < 5; i++)
        cout<<&A[i]<<endl;      // Prints the address of each element

    cout << P[0];
    
    delete []P;                 // Delete the memory from heap to prevent memory leaks
    return 0;
}