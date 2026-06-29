class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowpr =INT_MAX;
        int maxP = 0;
        for(int i=0;i<prices.size();i++){
           lowpr = min(lowpr,prices[i]);
           maxP = max(maxP,prices[i]-lowpr);
        }
        return maxP;
        
    }
};
