class Solution {
public:
    int jump(vector<int>& nums) {
       vector<int> ans(nums.size(),999999);
        ans[nums.size()-1]=0;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]==0)
                continue;
            for(int j=i+1;j<=i+nums[i] && j<nums.size();j++)
            {
                ans[i] = min(ans[i],ans[j]+1);
            }
        }
        return ans[0];
    }
};