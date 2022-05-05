class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
        
        q2.push(x);
        peek = x;
        
        while(!empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        queue<int> tmp = q1;
        q1 = q2;
        q2 = tmp;
    }
    
    int pop() {
        
        int result = top();
        q1.pop();
        
        return result;
        
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
    
private:
    queue<int> q1;
    queue<int> q2;
    int peek;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */