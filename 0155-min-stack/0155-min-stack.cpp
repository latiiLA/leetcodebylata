class MinStack {
public:
    int MinInStack = INT_MAX;
    vector<int> st;
    // stack<int>st2;
    MinStack() {
        vector<int> st;
        
    }
    
    void push(int val) {
       
        st.push_back(val);

    }
    
    void pop() {
        
        st.erase(st.begin()+st.size()-1);
    }
    
    int top() {
        return st.back();
        
    }
    
    int getMin() {
       
        return *min_element(st.begin(), st.end());
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