class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
        
        // put x into q2
        q2.push(x);
        
        // if q1 is not empty, then add them up to q2
        // to avoid all elements from q2 to q1
        while(!empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        // swap q1 and q2
        queue<int> tmp = q1;
        q1 = q2;
        q2 = tmp;
    }
    
    int pop() {
        
        // first value
        int result = top();
        q1.pop();
        
        return result;
        
    }
    
    // return the first value in the queue because it is FIFO
    int top() {
        return q1.front();
    }
    
    // check if q1 is empty
    bool empty() {
        return q1.empty();
    }
    
/*
    using two queues
*/
    
private:
    queue<int> q1;
    queue<int> q2;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */