#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function\n";
    }
};

class Derived : public Base {
public:
    void display() override {  // Function override
        cout << "Derived class display function\n";
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    // Virtual function, Derived class function is called at runtime
    basePtr->display();

    return 0;
}
