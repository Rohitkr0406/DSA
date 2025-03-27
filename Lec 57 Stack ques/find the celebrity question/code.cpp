#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
    public:
      int celebrity(vector<vector<int> >& mat) {
          int n = mat.size();
          
          stack<int>s;
          for(int i = 0; i< n; i++){
              s.push(i);
          }
          
          int a,b;
          while(s.size()>1){
              a = s.top();
              s.pop();
              
              b = s.top();
              s.pop();
              
              if(mat[a][b] == 1){
                  s.push(b);
              }
              else{
                  s.push(a);
              }
          }
          
          int ans = s.top();
          
          int zerocount = 0;
          int onecount = 0;
          for(int i = 0; i < n; i++){
              if(mat[ans][i] == 0){
                  zerocount++;
              }
              if(mat[i][ans] == 1){
                  onecount++;
              }
              
          }
          
          if(zerocount != n-1 || onecount != n) return -1;
          
          return ans;
      }
  };

  int main(){
    int n;
    cout<<"Enter the number of people: ";
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    cout<<"Enter the matrix: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>mat[i][j];
        }
    }
    Solution obj;
    cout<<"Celebrity is: "<<obj.celebrity(mat);
    return 0;
  }