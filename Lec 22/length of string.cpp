#include<iostream>
using namespace std;


class Solution {
public:
    static int getLength(char name[]) {
        int count = 0;
        for (int i = 0; name[i] != '\0'; i++) {
            count++;
        }
        return count;
    }
};


