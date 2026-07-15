class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // Opening brackets
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            // Closing brackets
            else {
                
                // If empty return false
                if (st.empty()) {
                    return false;
                }

                char top = st.top();

                // Checking that the last opening bracket matches with the closing bracket
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};