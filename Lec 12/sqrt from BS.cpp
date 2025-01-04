#include <iostream>
#include <iomanip> // For setting output precision
using namespace std;

// Integer square root calculation using binary search
int integerSqrt(int n) {
    int start = 0;
    int end = n;
    int ans = 0;

    while (start <= end) {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid; // Use long long for large values
        if (square == n)
            return mid;

        if (square > n)
            end = mid - 1;
        else {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

// Adding high precision to the square root result
double morePrecise(int n, int precision, int tempSol) {
    double ans = tempSol;
    double factor = 1.0;

    // Incrementally refine the result for each precision level
    for (int i = 0; i < precision; i++) {
        factor /= 10; // Reduce factor for finer increments
        for (double j = ans; j * j <= n; j += factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    cout << "Enter the number to find the square root: ";
    int n;
    cin >> n;

    int tempSol = integerSqrt(n); // Get the integer part of the square root
    double result = morePrecise(n, 15, tempSol); // Get precise result up to 15 decimal places

    // Print the result with 15 decimal places
    cout << fixed << setprecision(15);
    cout << "Square root of the number is: " << result << endl;

    return 0;
}
