#include <iostream>
#include <stack>
#include <string>
using namespace std;

class RedundantBrackets{
public:
    bool findRedundantBrackets(string &s)
    {
        stack<char> st;
        for(char ch: s){
            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
                st.push(ch);
            }
            else if(ch == ')'){
                bool isredundant = true;

                while(!st.empty() && st.top() != '('){
                    char top = st.top();
                    if( top == '+' || top == '-' || top == '*' || top == '/'){
                        isredundant = false;
                    }
                    st.pop();
                }

                if(!st.empty()){
                    st.pop();
                }

                if(isredundant)
                    return true;

            }
        }
        return false;
    }
};
