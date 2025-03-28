#include<iostream>
#include<stack>
using namespace std;
class Stacksort {
private:
    void sortedinsert(stack<int>& s, int x) {
        if (s.empty() || (!s.empty() && x > s.top())) {
            s.push(x);
            return;
        }

        int num = s.top();
        s.pop();

        sortedinsert(s, x);

        s.push(num);
    }

public:
    void sortStack(stack<int>& s) {
        if (s.empty()) {
            return;
        }

        int num = s.top();
        s.pop();
        sortStack(s);

        sortedinsert(s, num);
    }
};