#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    cout << "Enter the number of terms you want in the fibonacci series: ";
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}