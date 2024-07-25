#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter a binary number to convert into decimal: ";
    long long n;
    cin >> n;

    long long ans = 0;
    int i = 0;
    bool isNegative = false;
    long long temp = n;

    // Determine the number of bits in the input binary number
    int numBits = 0;
    while (temp != 0) {
        numBits++;
        temp /= 10;
    }

    // Check if the most significant bit (MSB) is 1
    temp = n;
    long long msb = temp / pow(10, numBits - 1);
    if (msb == 1) {
        isNegative = true;
    }

    // Convert binary to decimal
    while (n != 0) {
        int bit = n % 10;
        ans += bit * pow(2, i);
        n /= 10;
        i++;
    }

    // Adjust for 2's complement if the number is negative
    if (isNegative) {
        ans -= pow(2, numBits);
    }

    cout << "The following decimal number is: " << ans << endl;

    return 0;
}