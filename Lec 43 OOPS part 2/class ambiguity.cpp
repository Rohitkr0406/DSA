#include<iostream>
using namespace std;

class A {
    public:
    int c;

    void func()
    {
        cout<<"A class function is called";
    }
};

class B{
    public:
    int d;

    void func()
    {
        cout<<"B class function is called";
    }
};

class child: public A, public B{
};

int main()
{
    child T;
    T.A::func();//scope resolution operator is used to resolve the ambiguity
    cout<<endl;
    T.B::func();
    return 0;
}