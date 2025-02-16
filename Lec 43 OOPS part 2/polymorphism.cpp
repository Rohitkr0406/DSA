#include<iostream>
using namespace std;


//polymorphism is the ability of a function to behave differently based on the input arguments
//polymorphism is of two types


//1. compile time polymorphism
//compile time polymorphism is achieved by function overloading and operator overloading
//function overloading is the ability to define multiple functions with the same name but with different parameters
class A
{
    public:
    void add(int a, int b)
    {
        cout<<"sum is "<<a+b<<endl;
    }
    void add(int a, int b, int c)
    {
        cout<<"sum is "<<a+b+c<<endl;
    }
};

//operator overloading is the ability to define a function for an operator
class B
{
    public:
    int a;
    int b;
    void operator *(B obj)
    {
        cout<<"sum is "<<a+obj.a<<" "<<b+obj.b<<endl;
    }  

    void operator &(B obj)
    {
        cout<<"difference is "<<a-obj.a<<" "<<b-obj.b<<endl;
    }
};

//2. run time polymorphism
//run time polymorphism is achieved by function overriding
//function overriding is the ability to define a function in the derived class with the same name as the function in the base class
class C
{
    public:
    virtual void display()
    {
        cout<<"This is the base class"<<endl;
    }
};

class D:public C
{
    public:
    void display()
    {
        cout<<"This is the derived class"<<endl;
    }
};

int main()
{
    A obj1;//function overloading
    obj1.add(2,3);
    obj1.add(2,3,4);

    B obj2;//operator overloading
    obj2.a = 2;
    obj2.b = 3;
    B obj3;
    obj3.a = 4;
    obj3.b = 5;
    obj2*obj3;
    obj2&obj3;

    C obj4;
    D obj5;

    obj4.display();
    obj5.display();

    C *ptr;//pointer of base class
    D obj4;
    ptr = &obj4;
    ptr->display();
    return 0;
}