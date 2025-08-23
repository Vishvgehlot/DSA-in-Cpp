#include <iostream>
#include <stdio.h>
using namespace std;

void func2(int x){
    if (x>0){               
        func2(x-1);
        printf("%d ",x);
    }
}

int main(){
    int a = 3;
    func2(a);
    return 0;
}

//In this type of recursion you can see that the function call is done before the printing so this makes it such that all the functions get called 1st and then it goes backway around to like the print statement of func2(1) than to print statement of func2(2) and so on.... Unlike the previous version where we printed first its basically like once all the function calls end and the if statement condition isnt satisfying it just runs all the code under the function recursion call and in this case it was the print statement.