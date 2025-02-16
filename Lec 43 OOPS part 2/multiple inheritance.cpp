#include<iostream>
using namespace std;

class Laptop {
public:
    void compute() {
        cout << "Computing on Laptop" << endl;
    }
};

class Smartphone {
public:
    void call() {
        cout << "Calling on Smartphone" << endl;
    }
};

class Chromebook : public Laptop, public Smartphone {
public:
    void browse() {
        cout << "Browsing on Chromebook" << endl;
    }
};

int main() {
    Chromebook Chromebook;
    Chromebook.compute();  // From Laptop class
    Chromebook.call();     // From Smartphone class
    Chromebook.browse();   // From Chromebook class

    return 0;
}
