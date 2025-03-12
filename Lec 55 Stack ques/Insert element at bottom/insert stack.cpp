#include <bits/stdc++.h> 

stack<int>pushAtBottom(stack<int>& s, int x) {
    // base case
    if(s.empty()){
        s.push(x);
        return s;
    }
    int num = s.top();
    s.pop();

    //recursion

    pushAtBottom(s,x);
    s.push(num);

    return s;
    
}