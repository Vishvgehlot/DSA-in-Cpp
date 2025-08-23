#include <iostream>
using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
};

struct Rectangle *make(){
    struct Rectangle *p;
    p = new Rectangle;

    p->lenght = 20;
    p->breadth = 10;

    return p;
}

int main() {
    struct Rectangle *ptr = make();
    cout<<ptr->lenght<<","<<ptr->breadth;
    return 0;
}   