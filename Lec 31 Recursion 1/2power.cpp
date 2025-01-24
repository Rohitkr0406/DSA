#include <iostream>
using namespace std;

int power(int n, int p){
    if(p ==0)
        return 1;

    return n * power(n, p-1);
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "Enter the power: ";
    int p;
    cin >> p;
    cout << n << " raised to the power " << p << " is " << power(n, p) << endl;

    return 0;
}