#include <iostream>
using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
};

int fun(struct Rectangle r){
    return r.lenght*r.breadth;
}

int main() {
    struct Rectangle r1={5,10};
    cout<<"Area : "<<fun(r1);
    return 0;
}