#include <iostream>
using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
};

void changeLength(struct Rectangle &r){
    r.lenght = 20;
    cout<<r.lenght<<","<<r.breadth<<endl;
}

int main() {
    struct Rectangle r1={5,10};
    cout<<r1.lenght<<","<<r1.breadth<<endl;
    changeLength(r1);
    return 0;
}