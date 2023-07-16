class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int s=0,ans=INT_MIN,z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z++;
            }
            while(z>k){
                if(nums[s]==0){
                    z--;
                }
                s++;
            }
            ans=max(ans,i-s+1);
        }
        return ans;
    }
};