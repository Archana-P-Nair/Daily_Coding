class MyStack {
public:
    queue<int> mainq;
    queue<int> auxq;
    MyStack() {}
    
    void push(int x) {
        auxq.push(x);
        while(!mainq.empty()){
            auxq.push(mainq.front());
            mainq.pop();
        }
        swap(auxq,mainq);
    }
    int pop() {
        int top=mainq.front();
        mainq.pop();
        return top;
    }
    
    int top() {
        return mainq.front();
    }
    
    bool empty() {
        return mainq.empty();
    }
};

