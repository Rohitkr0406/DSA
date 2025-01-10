#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower

using namespace std;

class Solution {
public:

    bool isPalindrome(string s) {
        string filtered = "";
        for(char c: s)
        {
            if(isalnum(c))
                filtered+=tolower(c);
        }

        int n = filtered.length();
        for(int i=0; i<n/2; i++)
        {
           if(filtered[i] != filtered[n-i-1])
            return false;
        }
        return true;
    
    }
};

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    Solution obj;
    if(obj.isPalindrome(s))
        cout<<"The string is a palindrome"<<endl;
    else
        cout<<"The string is not a palindrome"<<endl;
}

/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.*/