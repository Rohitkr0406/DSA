#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the number to convert to binary: ";
    int n;
    cin >> n;

    unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Mask to extract each bit

    cout << "Binary representation: ";
    
    // Loop through each bit position
    for (int i = 0; i < sizeof(int) * 8; ++i) {
        // Check if the current bit is set
        if (n & mask) {
            cout << "1";
        } else {
            cout << "0";
        }
        // Shift mask to the right to check the next bit
        mask >>= 1;
    }
    
    cout << endl;

    return 0;
}