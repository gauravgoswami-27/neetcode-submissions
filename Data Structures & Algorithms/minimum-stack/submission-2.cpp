class MinStack {
public:
        vector<pair<int,int>> s;
        int mini= INT_MAX;
    MinStack() {
    }
    
    void push(int val) {
        if(s.size()==0) s.push_back({val,val});
        else  {mini = min(s.back().second,val);
        s.push_back({val,mini});}
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        if(!(s.size()==0 )){return s.back().first;}
        else return 0;
    }
    
    int getMin() {
       if(!(s.size()==0)) return s.back().second;
       return 0;
    }
};