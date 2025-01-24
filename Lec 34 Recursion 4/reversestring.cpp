#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverseString(string &s, int i, int j) {
    if(i >= j) {
        return;
    }
    swap(s[i], s[j]);
    reverseString(s, i+1, j-1);
}
    
int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    reverseString(s, 0, s.length()-1);
    cout<<"The reversed string is: "<<s<<endl;
    return 0;
}
