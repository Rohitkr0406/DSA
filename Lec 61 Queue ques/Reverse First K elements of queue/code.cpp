#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Solution {
    public:
      queue<int> reverseFirstK(queue<int> q, int k) {
          // code here
          stack<int> rev;
          for(int i=0; i<k; i++){
              rev.push(q.front());
              q.pop();
          }
          
          while(!rev.empty()){
              q.push(rev.top());
              rev.pop();
          }
          
          int t = q.size()-k; 
          for(int i=0; i<t; i++){
              q.push(q.front());
              q.pop();
          }
          return q;
      }
};

// Driver code
int main() {
    Solution obj;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    int k = 3;
    
    queue<int> result = obj.reverseFirstK(q, k);
    
    while(!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;
    
    return 0;
}