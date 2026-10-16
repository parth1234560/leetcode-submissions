class MinStack {
public:
    long long min;
    stack<long>st;
    MinStack() {
        min=(long)INT_MAX-1;
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            min=(long)value;
        }
        else{
            if(value<min){
                st.push((long)2*value-min);
                min=(long)value;
            }
            else{
                st.push(value);
            }
        }
    }
    
    void pop() {
        if(st.empty()){return;}
        if(st.top()>min){
            st.pop();
        }
        else{
            min=2*min-st.top();
            st.pop();
        }
    }
    
    int top() {
        if(st.empty()){return -1;}
        if(st.top()>min){
            return st.top();
        }
        else{
            return (int)min;
        }
        
    }
    
    int getMin() {
        return (int)min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
