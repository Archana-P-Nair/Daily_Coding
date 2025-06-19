class MinStack {
public:
    int min;
    stack<int> mainstack;
    stack<int> minstack;
    MinStack() {
       min=INT_MAX; 
    }
    
    void push(int val) {
        mainstack.push(val);
        if(val<=min){
            minstack.push(min);
            min=val;
        }
    }
    
    void pop() {
        if(mainstack.top()==min){
            min=minstack.top();
            minstack.pop();
        }
        mainstack.pop();       
    }
    int top() {
        return mainstack.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
