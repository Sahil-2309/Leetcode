class Solution {
public:
    int minPairSum(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());

        int ans=INT_MIN,n=nums.size();

        for(int i=0;i<n;i++){

            ans=max(ans,nums[i]+nums[n-i-1]);

        }

        return ans;
    }
};