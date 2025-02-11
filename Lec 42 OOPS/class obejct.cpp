#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

// Empty class: Even an empty class has a minimum size of 1 byte to ensure unique memory addresses for objects.
class EmptyClass{};

class Hero {
private:
    int attack;
    int health;
    char *name;
    
public:
    static int timetoKill; // Static member variable shared by all objects of this class
    int defense;
    int level;
    int experience;
 

    // Default Constructor: This is called automatically when an object is created. If not defined, the compiler provides one.
    Hero() {
        cout << "Hero object created" << endl;
        name = new char[50]; // Dynamic memory allocation for character array
    }

    // Parameterized Constructor: Used to initialize objects with custom values.
    Hero(int health, int attack) {
        cout << "this -> " << this << endl; // 'this' pointer points to the calling object
        this->health = health;
        this->attack = attack;
        this->name = new char[50];  // Missing initialization
    }

    // Getter & Setter Methods for Encapsulation
    int getAttack() {
        return attack;
    }
    void setAttack(int a) {
        attack = a;
    }
    int getHealth() {
        return health;
    }
    void setHealth(int h) {
        health = h;
    }
    
    // Set name using deep copy to avoid pointer issues
    void setname(char name[]) {
        strcpy(this->name, name);  // Could cause buffer overflow
    }
    
    // Display name
    void getname() {
        cout << name << endl;
    }

    // Print Method: Displays all member variables of the object
    void print() {
        cout << "\n[ Name: " << name << " , " ;
        cout << "Attack: " << attack << " , " ;
        cout << "Health: " << health << " , " ;
        cout << "Defense: " << defense << " , " ;
        cout << "Level: " << level << " , " ;
        cout << "Experience: " << experience << " ]" << endl;
    }

    // Static Member Function: Can only access static variables. It does not require an object to be called.
    static void printTimeToKill() {
        cout << "Time to kill: " << timetoKill << endl;
    }

    // Deep Copy Constructor: Allocates new memory and copies values to prevent pointer conflicts.
    Hero(Hero &h) {
        cout << "Copy constructor called" << endl;
        this->attack = h.attack;
        this->health = h.health;
        this->defense = h.defense;
        this->level = h.level;
        this->experience = h.experience;
        this->name = new char[strlen(h.name) + 1]; // Allocate new memory
        strcpy(this->name, h.name); // Copy name data
    }

    // Destructor: Called automatically when an object is destroyed. Frees dynamically allocated memory.
    ~Hero() {
        cout << "Destructor called" << endl;
        delete[] name;
    }
};

// Static member variable initialization
int Hero::timetoKill = 10;

int main() {
    // Static member variable access
    cout << "Time to kill: " << Hero::timetoKill << endl;
    
    // Object creation calls constructor
    Hero h1;
    Hero *h2 = new Hero(); // Dynamic object creation
    cout << "Size of Hero class object: " << sizeof(h1) << endl;
    
    // Parameterized Constructor
    Hero ramesh(100, 200);
    cout << "Address of ramesh object: " << &ramesh << endl;
    char name3[]= "Ramesh";
    ramesh.setname(name3);
    ramesh.defense = 50;
    ramesh.level = 5;
    ramesh.experience = 500;
    ramesh.print();
    
    // Copy Constructor (Deep Copy ensures data duplication instead of reference copy)
    Hero suresh(ramesh);
    suresh.print();
    
    char name[] = "Rohit";
    h1.setname(name);
    h1.defense = 100;
    h1.level = 10;
    h1.experience = 1000;
    h1.setAttack(100);
    h1.setHealth(1000);
    cout << "Hero 1" << endl;
    h1.print();
    
    // Modifying dynamic object properties
    char name2[] = "Rahul";
    h2->setname(name2);//pointer object me -> operator se access kia jata hai function ko
    h2->defense = 200;
    (*h2).level = 20;
    h2->experience = 2000;
    h2->setAttack(200);
    h2->setHealth(2000);
    cout << "Hero 2" << endl;
    h2->print();
    
    // Deep Copy Constructor Usage
    Hero h4(h1);
    
    // Copy Assignment Operator: Creates a new object with the same values as h1
    Hero h3 = h1;  // This actually calls copy constructor, but assignment operator (h3 = h1) would be problematic
    
    // Size of EmptyClass Object (Minimum size = 1 byte)
    EmptyClass e1;
    cout << "Size of EmptyClass object: " << sizeof(e1) << endl;
    
    // Manually deleting dynamic object to prevent memory leak
    delete h2; 
    return 0;
}
