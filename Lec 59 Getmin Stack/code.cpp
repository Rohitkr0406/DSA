#include<iostream>
#include<stack>
#include<climits>
using namespace std;


class SpecialStack {
	stack<int> s;
    int mini = INT_MAX;
    public:
        
    void push(int data) {
        if(s.empty()) {
            s.push(data);
            mini = data;
        }
        else
        {
         	if(data < mini) {
                s.push(2*data - mini);
                mini = data;
            }   
            else
            {
                s.push(data);
            }
        }
    }

    void pop() {
        if(s.empty()){
            return;
        }
        
        int curr = s.top();
        s.pop();
        if(curr > mini) {
            return;
        }
        else
        {
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return;
        }
    }

    int top() {
        if(s.empty())
            return -1;
        
        int curr = s.top();
        if(curr < mini) {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    bool isEmpty() {
        return s.empty();
    }

    
    int getMin() {
        if(s.empty())
            return -1;
        
        return mini;
    }  
};

// Driver code
int main(){
    SpecialStack s;
    s.push(3);
    s.push(5);
    cout << s.getMin() << endl; // 3
    s.push(2);
    s.push(1);
    cout << s.getMin() << endl; // 1
    s.pop();
    cout << s.getMin() << endl; // 2
    s.pop();
    cout << s.top() << endl; // 5
    cout << s.getMin() << endl; // 2
    return 0;
}