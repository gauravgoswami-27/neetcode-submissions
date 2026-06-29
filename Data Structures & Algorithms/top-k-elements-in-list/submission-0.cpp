class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> ele;
        for(int i=0;i<nums.size();i++){
            ele[nums[i]]++;
        }
    vector<pair<int,int>>  e(ele.begin(),ele.end());
    sort(e.begin(),e.end(),[](const auto&a,const auto&b){
        return a.second> b.second;
    });
    vector<int> ans;
    for(int i =0;i<k;i++){
        ans.push_back(e[i].first);
    }
    return ans;
    }
};
