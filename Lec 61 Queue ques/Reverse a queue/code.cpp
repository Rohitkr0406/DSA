#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Solution {
    public:
      queue<int> reverseQueue(queue<int> q) {
         stack<int> s;
         
         while(!q.empty()){
             s.push(q.front());
             q.pop();
         }
         
         while(!s.empty()){
             q.push(s.top());
             s.pop();
         }
         return q;
      }
  };


  // Driver Code 
  int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t; 
    while (t--) {
        queue<int> q;
        int n;
        cout << "Enter size of queue: ";
        cin >> n; 
        cout<<endl;
        cout << "Enter elements of queue: ";
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x; // Input elements of queue
            q.push(x);
        }
        cout << endl;
        cout << "Reversed queue: ";
        Solution ob;
        queue<int> ans = ob.reverseQueue(q); // Call to reverseQueue function
        while (!ans.empty()) {
            cout << ans.front() << " "; // Output the reversed queue
            ans.pop();
        }
        cout << endl; // New line after each test case
    }
    return 0;
  }
  