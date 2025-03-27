#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
// Approach 1: Using stack to find the largest rectangle in a histogram

class Solution {
    private:
        vector<int> nextsmallerelement(vector<int>& arr, int n){
            stack<int>s;
            vector<int>ans(n);
            s.push(-1);
    
            for(int i = n-1; i>=0; i--){
                int curr = arr[i];
    
                while(s.top()!= -1 && arr[s.top()]>=curr){
                    s.pop();
                }
                ans[i] = s.top();
                s.push(i);
            }      
            return ans;  
        }
    
        vector<int> prevsmallerelement(vector<int>& arr, int n){
            stack<int>s;
            vector<int>ans(n);
            s.push(-1);
    
            for(int i = 0; i<n; i++){
                int curr = arr[i];
    
                while(s.top()!= -1 && arr[s.top()]>=curr){
                    s.pop();
                }
                ans[i] = s.top();
                s.push(i);
            }      
            return ans;  
        }
    
        int largestRectangleArea(vector<int>& heights) {
            int n = heights.size();
    
            vector<int> next(n);
            next = nextsmallerelement(heights,n);
    
            vector<int> prev(n);
            prev = prevsmallerelement(heights,n);
    
            int area = INT_MIN;
    
            for(int i = 0; i < n; i++){
                int l = heights[i];
                if(next[i] == -1){
                    next[i] = n;
                }
    
                int b = next[i] - prev[i] - 1;
                int newarea = l*b;
                area = max(newarea, area);
    
            }
            return area;
        }
    
      public:
        
        int maxArea(vector<vector<int>> &mat) {
            int area = 0;
            int n = mat.size();
            int m = mat[0].size();
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(i > 0 && mat[i][j] != 0){
                        mat[i][j] += mat[i-1][j];
                    }
                }
                area = max(area, largestRectangleArea(mat[i]));
            }
            return area;
        }
    };

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {0, 1, 1, 0},
        {1, 1, 0, 0}
    };
    cout << "Maximum area of rectangle in binary matrix: " << sol.maxArea(mat) << endl;
    return 0;
}
// Output: Maximum area of rectangle in binary matrix: 6