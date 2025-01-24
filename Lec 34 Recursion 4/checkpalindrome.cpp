#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkpalindrome(string &s, int i){
    if(i>=s.length()/2)
        return true;

    if(s[i]!=s[s.length()-1-i]){
        return false;
    }
    return checkpalindrome(s, i+1, j-1);
    
}

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int i=0;
    if(checkpalindrome(s, i, j)){
        cout<<"The string is a palindrome"<<endl;
    }
    else{
        cout<<"The string is not a palindrome"<<endl;
    }

    return 0;
}