class MinStack {
public:
    stack<int> value, minimum;
    MinStack() {
        
    }
    
    void push(int val) {
        value.push(val);
        if (minimum.empty()) {
            minimum.push(val);
        }
        else {
            minimum.push(min(val, minimum.top()));
        }
        
    }
    
    void pop() {
        value.pop();
        minimum.pop();
    }
    
    int top() {
        return value.top();
    }
    
    int getMin() {
        return minimum.top();
    }
};
