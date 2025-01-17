// C++ program to demonstrate the
// making of structure
#include <bits/stdc++.h>
using namespace std;

// Define structure
struct GFG {
    int G1;
    char G2;
    float G3;
};

// Driver Code
int main()
{
    // Declaring a Structure
    struct GFG Geek;
    Geek.G1 = 85;
    Geek.G2 = 'G';
    Geek.G3 = 989.45;
    cout << "The value is : " << Geek.G1 << endl;
    cout << "The value is : " << Geek.G2 << endl;
    cout << "The value is : " << Geek.G3 << endl;

    return 0;
}