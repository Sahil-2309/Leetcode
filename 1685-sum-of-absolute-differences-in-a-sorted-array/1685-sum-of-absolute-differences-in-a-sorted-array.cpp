class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        int n=nums.size(),total=accumulate(nums.begin(),nums.end(),0),leftsum=0;

        vector<int> ans;
        
        for(int i=0;i<n;i++){

            int rightsum = total-leftsum-nums[i];

            int left=i*nums[i]-leftsum;
            int right = rightsum - (n-1-i)*nums[i];

            ans.push_back(left+right);

            leftsum+=nums[i];

        }

        return ans;
    }
};