#include <iostream>
#include <stdio.h>
using namespace std;

void func(int n){
    if(n>0){
        func(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int x = 3;
    func(x);
    return 0;
}

//In this type of recursion you can see that the function call is done before the printing so this makes it such that all the functions get called 1st and then it goes backway around to like the print statement of func2(1) than to print statement of func2(2) and so on.... Unlike the previous version where we printed first its basically like once all the function calls end and the if statement condition isnt satisfying it just runs all the code under the function recursion call and in this case it was the print statement.