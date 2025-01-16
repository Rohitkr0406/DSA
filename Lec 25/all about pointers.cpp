#include <iostream>
using namespace std;

int main() {
    // 1. Pointer Basics
    int a = 10;
    int *p = &a; // 'p' stores the address of 'a'
    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value stored in pointer p: " << p << endl;
    cout << "Value pointed by p (*p): " << *p << endl;

    // 2. Pointer Arithmetic
    int arr[] = {1, 2, 3, 4};
    int *arrPtr = arr; // Points to the first element of the array
    cout << "\nPointer Arithmetic on array:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "arr[" << i << "] = " << *(arrPtr + i) << endl;
    }

    // 3. Dynamic Memory Allocation
    int *dynPtr = new int(42); // Dynamically allocate memory
    cout << "\nDynamically allocated value: " << *dynPtr << endl;
    delete dynPtr; // Free allocated memory

    // 4. Pointer to Pointer
    int **pp = &p; // 'pp' stores the address of pointer 'p'
    cout << "\nPointer to pointer:" << endl;
    cout << "Address of p (&p): " << &p << endl;
    cout << "Value stored in pp (address of p): " << pp << endl;
    cout << "Value pointed by pp (*pp): " << *pp << endl;
    cout << "Value pointed by *pp (**pp): " << **pp << endl;

    // 5. Void Pointer
    void *vPtr = &a; // Can point to any data type
    cout << "\nVoid pointer pointing to a (casting required): " << *(static_cast<int *>(vPtr)) << endl;

    // 6. Null Pointer
    int *nullPtr = nullptr; // Points to nothing
    cout << "\nNull Pointer:" << endl;
    if (nullPtr == nullptr) {
        cout << "nullPtr is null." << endl;
    }

    return 0;
}
