#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main(){
    Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //For C
    // p = new Rectangle  (For C++)

    p->length = 10;
    p->breadth = 15;

    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;
    return 0;
}

