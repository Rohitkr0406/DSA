#include<iostream>
#include<algorithm>
using namespace std;

class Human {
    protected:
    int height;
    int weight;
    int age;
    string name;
    int bodycount;

    public:
    void setHeight(int h) { height = h; }
    void setWeight(int w) { weight = w; }
    void setAge(int a) { age = a; }
    void setName(string n) { name = n; }
    void setBodycount(int b) { bodycount = b; }
};  // Added missing semicolon

class male: public Human { //inheritance
    public:
    int penisSize;
    int beardLength;

    void attack() {
        cout << "Attacking" << endl;
    }

    void print() {
        cout << "[ Height: " << height 
             << ", Weight: " << weight 
             << ", Age: " << age 
             << ", Name: " << name 
             << ", Bodycount: " << bodycount 
             << ", Penis Size: " << penisSize 
             << ", Beard Length: " << beardLength 
             << " ]" << endl;
    }
};  // Added missing semicolon

class female: public Human { //inheritance
    public:
    int boobSize;
    int assSize;

    void seduce() {
        cout << "Seducing" << endl;
    }

    void print(){
        cout << "[ Height: " << height;
        cout << ", Weight: " << weight ;
        cout << ", Age: " << age 
        cout << ", Name: " << name 
        cout << ", Bodycount: " << bodycount 
        cout << ", Boob Size: " << boobSize 
        cout << ", Ass Size: " << assSize 
        cout << " ]" << endl;
    }
};  // Added missing semicolon

int main() {
    // Demonstration of male and female objects
    male ramesh;
    ramesh.setHeight(179);
    ramesh.setWeight(70);
    ramesh.setAge(25);
    ramesh.setName("Ramesh");
    ramesh.setBodycount(3);
    ramesh.penisSize = 10;
    ramesh.beardLength = 5;
    ramesh.print();

    female shruti;
    shruti.setHeight(165);
    shruti.setWeight(50);
    shruti.setAge(23);
    shruti.setName("Shruti");
    shruti.setBodycount(20);
    shruti.boobSize = 5;
    shruti.assSize = 4;
    shruti.print();

    return 0;
}
