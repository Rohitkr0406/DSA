#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int findMinimumCost(string str) {
        if(str.length()%2 != 0) return -1;
    
        stack<char>s;
        for(char ch: str){
          if(ch == '{'){
            s.push('{');
          }
          else{
            if(!s.empty() && s.top() == '{'){
              s.pop();
            }
            else{
              s.push(ch);
            }
          }
        }
        int a,b;
        a=b=0;
        while(!s.empty()){
          if(s.top() == '{') a++;
          else b++;
          s.pop();
        }
    
        int cost = (a+1)/2 + (b+1)/2;
        return cost;
    }
};
