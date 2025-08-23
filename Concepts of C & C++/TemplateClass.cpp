#include <iostream>
using namespace std;

template <class T>
class Arithematic{
    private:
        T a,b;
    public:
        Arithematic(T a,T b);
        T add();
        T sub();
};

        template <class T>
        Arithematic<T> :: Arithematic(T a,T b){
            this->a = a;
            this->b = b;
        }

        template <class T>
        T Arithematic<T> :: add(){
            return a+b;
        }

        template <class T>
        T Arithematic<T> :: sub(){
            return a-b;
        }

int main(){
    Arithematic<int> a1(10,5);
    Arithematic<float> a2(10.5,5.5);
    cout<<a1.add()<<endl;
    cout<<a1.sub()<<endl;
    cout<<a2.add()<<endl;
    cout<<a2.sub()<<endl;
    return 0;
}