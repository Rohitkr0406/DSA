#include <iostream>
#include <queue>
#include <map>
#include <string>
using namespace std;

class Solution {
    public:
      string FirstNonRepeating(string &s) {
          // Code here
          map<char,int> m;
          queue<char> q;
          string ans = "";
          
          for(int i=0; i<s.length(); i++){
              char ch = s[i];
              
              q.push(ch);
              m[ch]++;
              
              while(!q.empty()){
                  if(m[q.front()]>1){
                      q.pop();
                  }
                  else{
                      ans.push_back(q.front());
                      break;
                  }
              }
              if(q.empty()){
                  ans.push_back('#');
              }
          }
          return ans;
      }
  };

// Driver code
int main() {
    Solution obj;
    string s = "aabcbcd";
    string result = obj.FirstNonRepeating(s);
    
    cout << result << endl; // Output: "a#bb"
    
    return 0;
}