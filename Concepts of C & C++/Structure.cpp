#include <iostream>

using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
    char x;
};

int main() {
    struct Rectangle r1={5,10};
    printf("%d",sizeof(r1));
}