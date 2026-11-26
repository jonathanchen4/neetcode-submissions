class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> values;
        for(string& c : tokens) {
            if(c == "+") {
                int a = values.top();
                values.pop();
                int b = values.top();
                values.pop();
                values.push(b + a);
            }
            else if (c == "-") {
                int a = values.top();
                values.pop();
                int b = values.top();
                values.pop();
                values.push(b - a);
            }
            else if (c == "*") {
                int a = values.top();
                values.pop();
                int b = values.top();
                values.pop();
                values.push(b * a);
            }
            else if (c == "/") {
                int a = values.top();
                values.pop();
                int b = values.top();
                values.pop();
                values.push(b / a);
            }
            else {
                values.push(stoi(c));
            }
        }
        return values.top();
    }
};
