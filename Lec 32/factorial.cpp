#include <iostream>
using namespace std;

long long int factorial(int n) {
    if(n == 0) {
        return 1;
    } 
    return n * factorial(n-1);
}

int main() {
    int n;
    cout << "Enter a number(no. should be less than 21) :  ";
    cin >> n;
    long long int fact= factorial(n);

    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}