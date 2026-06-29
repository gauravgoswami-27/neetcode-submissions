class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        int l=0,r=n-1;
        while(l<r){
           int  n1 = num[l];
            int n2 = num[r];
            if(n1+n2 == target && n1!=n2){
                return  {l+1,r+1};
            }
            else if(n1 + n2 < target) l++;
            else r--;
        }
        return {-1,-1};
    }
};
