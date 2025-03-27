#include<stack>
#include<vector>
#include<iostream>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n){
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for(int i=n-1; i>=0; i--){
        while(s.top() != -1 && s.top() >= arr[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = nextSmallerElement(arr, n);
    cout<<"The next smaller element for each element is: ";
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}