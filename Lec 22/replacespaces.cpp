/*Problem statement
You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 50
0 <= |STR| <= 100

Where ‘|STR|’ is the length of a particular string including spaces.*/


#include <iostream>
#include <string> 
using namespace std;

class Solution {
public:
    static string replaceSpaces(string str) {
        string result = "";
        for (char c : str) {
            if (c == ' ') {
                result += "@40";
            } else {
                result += c;
            }
        }
        return result;
    }
};