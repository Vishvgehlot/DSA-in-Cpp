#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int A[3][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};            //Normal Array inside stack

    int *B[3];
    B[0] = new int [4];     //One array in stack and the elements of each array(in stack) points to another array in heap.
    B[1] = new int [4];
    B[2] = new int [4];

    int **C;                // Both array in heap one and one pointer points to the one array and elements of that array 
    C = new int *[3];       // point to the array in heap
    C[0] = new int [4];
    C[1] = new int [4];
    C[2] = new int [4];

    // Giving Values
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            B[i][j] = i*j;
            C[i][j] = i*j;
        }
    }
    
    //Printing
    cout<<"\nArray A"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    } 

    cout<<"\nArray B"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    } 

    cout<<"\nArray C"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    } 

    delete [] B;
    delete [] C;
    return 0;
}