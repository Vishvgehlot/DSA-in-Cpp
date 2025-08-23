#include <iostream>
using namespace std;
void fun (int A[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
}
int main(){
    int a[] = {0,1,2,3,4};
    fun(a,5);
    return 0;
}