#include<iostream>
#include<queue>
using namespace std;

class Solution {
    public:
      vector<int> firstNegInt(vector<int>& arr, int k) {
         deque<int> dq;
         vector<int>ans;
         
         for(int i=0; i<k; i++){
             if(arr[i]<0){
                 dq.push_back(i);
             }
         }
         
         if(dq.size()>0){
             ans.push_back(arr[dq.front()]);
         }
         else{
             ans.push_back(0);
         }
         
         for(int i=k; i<arr.size(); i++){
             if(!dq.empty() && i - dq.front() >= k){
                 dq.pop_front();
             }
             
             if(arr[i]<0){
                 dq.push_back(i);
             }
             
             if(dq.size()>0)
              ans.push_back(arr[dq.front()]);
             else
              ans.push_back(0);
             
         }
         return ans;
          
      }
  };

  //driver code

  int main() {
    Solution obj;
    vector<int> arr = {-1, 2, -3, 4, -5};
    int k = 2;
    vector<int> result = obj.firstNegInt(arr, k);
    
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
  }