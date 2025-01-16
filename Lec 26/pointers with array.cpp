#include <iostream>
using namespace std;

int main() {
    int arr[5] = {8, 6, 13, 9, 5};
    int *p = arr;
    cout << arr << endl; // address of the first element
    cout << p << endl; // address of the first element
    cout << &arr[0] << endl; // address of the first element

    cout<< *p << endl; // value of first element

    cout<<"value of first element: "<< *arr << endl; // 
    cout<<"value of first element + 1: "<< *arr+1 << endl; 
    cout<<"value of second element: "<< *(arr +1) <<endl; 
    cout<< (*arr)+1<<endl; // 9
    cout<< 1[arr]<<endl; //6
    cout<< *(1+arr)<<endl; //6

    int temp[10];
    cout<<"size of the array: " << sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout<<"size of pointer: " << sizeof(ptr) << endl;
    cout<<"size of memory block of pointer: " << sizeof(*ptr) << endl;
    cout<<"size of pointer: " << sizeof(&ptr) << endl;

    int a[20] = {1,2,3,5};
    cout << "->" << &a [0] << endl; 
    cout << &a << endl;
    cout << a <<<< endl;

    int *p1 = &a[0];
    cout << p1 << endl;
    cout << *p1 << endl;
    cout << "->" << &p << endl;

    char ch[] = "hello";
    char *pc = ch;
    char *pc2= &ch[0];
    cout << pc << endl;//prints entire string
    cout << ch << endl;//prints entire string
    cout << *pc << endl;
    cout << pc2 << endl;//prints entire string
    cout << *pc2 << endl;

    char c='t';
    char *p = &c;
    cout << p << endl;//prints characters until null character found
    
    return 0;
}