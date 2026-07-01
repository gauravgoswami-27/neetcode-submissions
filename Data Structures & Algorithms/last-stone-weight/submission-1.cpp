class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int n = stones.size();
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int f = pq.top();
            pq.pop();
            int s = pq.top();
            pq.pop();
            if(f==s) continue;
            if(f<s) pq.push(s-f);
            else pq.push(f-s);
        }
       if(pq.size()>0) return pq.top();
       return 0;
    }
};
