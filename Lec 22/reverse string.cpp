#include <iostream>
#include "length of string.cpp" // Include the file where the Solution class is defined

using namespace std;

class Solution {
public:
    int getLength(const char str[]); // Assuming this function is defined elsewhere
    void reverseString(char str[]) {
        int n = getLength(str);
        for (int i = 0; i < n / 2; i++) {
            swap(str[i], str[n - i - 1]);
        }
    }
};



int main() {
    char str[100]; // Increased size to accommodate larger input
    cout << "Enter a string: ";
    cin.getline(str, 100); // Use getline to read the entire line including spaces
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}