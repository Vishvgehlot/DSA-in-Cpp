#include <iostream>
using namespace std;

int area(int length , int breadth){
    return length*breadth;
}

int perimeter(int length , int breadth){
    return 2*(length+breadth);
}

int main(){
    int l,b;

    printf("Enter the value of lenght and breadth");
    cin >> l >> b;

    int a = area(l,b);
    int peri = perimeter(l,b);

    cout << "Area = "<<a<<endl;
    cout <<"Perimeter = "<<peri<<endl;
    
    return 0;
}