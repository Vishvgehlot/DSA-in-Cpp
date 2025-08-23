#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int a = 10;
    int A[5] = {2,4,6,8,10};

    int *p;
    int *q;
    int *r;
    int *s;
    int *u;

    //Created the array in Heap memory instead of stack memory
    //For C
    s = (int *)malloc(5*sizeof(int));
    s[0]=0;s[1]=1;s[2]=2;s[3]=3;s[4]=4;

    //For C++
    u = new int[5];
    u[0]=0;u[1]=1;u[2]=2;u[3]=3;u[4]=4;

    p = &a;
    q = A;
    r = &A[0];

    // cout << "Value of a: " << a << endl;
    // cout << "Value of a using Pointer: " << *p << endl;

    // for (int i = 0; i < 5; i++){
    //     cout<<q[i]<<endl;
    // }

    for (int i = 0; i < 5; i++){       
        cout<<s[i]<<endl;
    }


    //After you are done you need to Delocate the memory for that you use
    //For C
    free(s);

    //For C++
    delete [ ]u; //For array you need square brackets in front
    
    return 0;
}