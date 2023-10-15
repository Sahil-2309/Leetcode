class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> ans;
        vector<int> extra;
        while(n--){
            extra.clear();
            for(int i=0;i<n;i++){
                if(nums[i]+nums[i+1]>=10){
                    extra.push_back((nums[i]+nums[i+1])%10);
                }
                else
                extra.push_back(nums[i]+nums[i+1]);
            }
            nums=extra;
        }
        return nums[0];
    }
};