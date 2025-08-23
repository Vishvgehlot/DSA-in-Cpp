#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){
            length = 0;
            breadth = 0;
        }

        Rectangle (int l,int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length*breadth;
        }
        
        int perimeter(){
            return 2*(length+breadth);
        }

        ~Rectangle(){
            cout<<"Destructor Called!";
        }
};
    
    int main(){
    Rectangle r(5,10);

    int a = r.area();
    int peri = r.perimeter();

    cout << "Area = "<<a<<endl;
    cout <<"Perimeter = "<<peri<<endl;

    return 0;
}