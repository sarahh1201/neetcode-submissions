class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string token : tokens) {

            // If the token is a number, put it on the stack
            if (token != "+" && token != "-" && 
                token != "*" && token != "/") {

                st.push(stoi(token));
            }

            // If the token is an operator, we need to calculate
            else {
                int t2 = st.top();
                st.pop();

                int t1 = st.top();
                st.pop();

                int result;

                if (token == "+") {
                    result = t1 + t2;
                }
                else if (token == "-") {
                    result = t1 - t2;
                }
                else if (token == "*") {
                    result = t1 * t2;
                }
                else { 
                    result = t1 / t2;
                }

                st.push(result);
            }
        }

        return st.top();
    }
};