class Solution {
private:
    bool matches(char top, char ch) {
        if (ch == ']' && top == '[' || ch == '}' && top == '{' ||
            ch == ')' && top == '(') {
            return true;
        } else
            return false;
    }

public:
    bool isValid(string s) {
        stack<char> check;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '[' || ch == '(' || ch == '{') {
                check.push(ch);
            } else {
                if (!check.empty()) {
                    char top = check.top();
                    if (matches(top, ch)) {
                        check.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }

        return check.empty();
    }
};