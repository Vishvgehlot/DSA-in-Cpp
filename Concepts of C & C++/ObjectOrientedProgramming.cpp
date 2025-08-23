#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    
    void initialize(int l,int b){
        length = l;
        breadth = b;
    }
    
    int area(){
        return length*breadth;
    }
    
    int perimeter(){
        return 2*(length+breadth);
    }
};
    
    int main(){
    Rectangle r;

    int l,b;
    printf("Enter the value of lenght and breadth");
    cin >> l >> b;

    r.initialize(l,b);

    int a = r.area();
    int peri = r.perimeter();

    cout << "Area = "<<a<<endl;
    cout <<"Perimeter = "<<peri<<endl;

    return 0;
}