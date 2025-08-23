#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter : ";
    cin>>n;

    int A[5];
    int B[5] = {2,4,6,8,10};
    int C[] = {2,4,6,8,10,12};
    int D[10] = {2,4,6,8};
    int E[n] = {1,2,3,4};

    
    A[0] = 0;
    A[1] = 1;
    A[2] = 2;


    //Elements which are not defined will have value 0
    for(int x:E){
        cout<<x<<endl;
    }
    
    return 0;
}