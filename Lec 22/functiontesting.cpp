#include <iostream>
#include <vector>
#include <algorithm>
#include "stringcompression.cpp"
#include "permutation string.cpp"

using namespace std;

int main() {
    StringCompressionSolution scSol;
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int compressedLength = scSol.compress(chars);
    cout << "Compressed Length: " << compressedLength << endl;
    cout << "Compressed Array: ";
    for (int i = 0; i < compressedLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;

    PermutationSolution pSol;
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool isPermutation = pSol.checkInclusion(s1, s2);
    cout << "Is s1 a permutation of s2? " << (isPermutation ? "Yes" : "No") << endl;

    return 0;
}