class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> c;
        
        for (char ch : s) {
            c.push(ch);
        }

        for (int i = 0; i < s.size(); i++) {
            s[i] = c.top();
            c.pop();
        }
    }
};
