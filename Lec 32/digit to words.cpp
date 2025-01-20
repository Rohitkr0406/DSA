#include <iostream>
using namespace std;

void saydigit(int n, string words[]) {
    if(n == 0) {
        return;
    }
    saydigit(n/10, words);
    cout << words[n%10] << " ";
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Number in words : ";
    saydigit(n, words);
    return 0;
}