#include<iostream>
using namespace std;

class Animal {// Base class
protected:
    int hands;
    int legs;

public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal {// Derived class
public:
    void bark() {
        cout << "Barking" << endl;
    }
};

class Labrador : public Dog {// Derived class
public:
    void fetch() {
        cout << "Fetching" << endl;
    }
};

int main() {
    Labrador lab;
    lab.speak();  // From Animal class
    lab.bark();   // From Dog class
    lab.fetch();  // From Labrador class

    return 0;
}

