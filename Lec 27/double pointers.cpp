#include <iostream>
using namespace std;

// Function to demonstrate updates via double pointers
void update(int **p2) {
    // **p2 accesses the value of the variable being pointed to
    **p2 = **p2 + 1; // Modifies the original variable
    // Note: Uncommenting the following lines demonstrates different scenarios
    // p2 = p2 + 1;  // Does NOT change anything outside this function (local copy updated)
    // *p2 = *p2 + 1; // Changes the address stored in 'p' (dangerous if not managed properly)
}

int main() {
    int i = 5;        // An integer variable
    int *p = &i;      // Single pointer to the integer
    int **p2 = &p;    // Double pointer pointing to the address of 'p'

    // Displaying initial state
    cout << endl << "Initial values:" << endl;
    cout << "i = " << i << endl;
    cout << "Address of i (&i) = " << &i << endl;
    cout << "p (Address of i) = " << p << endl;
    cout << "*p (Value of i) = " << *p << endl;
    cout << "p2 (Address of p) = " << p2 << endl;
    cout << "*p2 (Address of i via p) = " << *p2 << endl;
    cout << "**p2 (Value of i via double pointer) = " << **p2 << endl;

    // Modifying value using double pointer
    cout << "\nBefore update():" << endl;
    cout << "i = " << i << endl;

    update(p2);

    cout << "\nAfter update():" << endl;
    cout << "i = " << i << endl;
    cout << "p (Address of i) = " << p << endl;
    cout << "p2 (Address of p) = " << p2 << endl;

    // Notes for revision
    /*
    Key Concepts:
    1. Double Pointer (**p2) allows indirect manipulation of the value at a memory location.
    2. **p2 modifies the value being pointed to, affecting the original variable.
    3. *p2 modifies the address stored in the single pointer 'p', not recommended without caution.
    4. p2 = p2 + 1 affects only the local copy inside the function, not the original.

    Things to Avoid:
    - Dereferencing uninitialized pointers (wild pointers).
    - Modifying the address stored in *p2 arbitrarily can lead to undefined behavior.

    Related Topics to Explore:
    - Pointer Arithmetic
    - Dangling Pointers
    - Null Pointers and Safe Practices
    */

    return 0;
}
