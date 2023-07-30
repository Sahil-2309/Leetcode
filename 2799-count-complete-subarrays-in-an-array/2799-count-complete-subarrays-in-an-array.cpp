class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> s;
        for(auto v:nums) s.insert(v);
        int n=s.size(),ans=0;
        s.clear();
        for(int i=0;i<nums.size();i++){
            s.clear();
            for(int j=i;j<nums.size();j++){
            s.insert(nums[j]);
        if(s.size()==n) ans++;
            }
        }
        return ans;
    }
};