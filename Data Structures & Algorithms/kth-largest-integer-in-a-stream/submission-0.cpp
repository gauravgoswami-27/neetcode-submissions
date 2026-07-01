class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> mh;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int i=0;i<nums.size();i++){
            mh.push(nums[i]);
            if(mh.size()>k) mh.pop();
        }
    }
    
    int add(int val) {
        mh.push(val);
        if(mh.size()>k) mh.pop();
        return mh.top();
    }
};
