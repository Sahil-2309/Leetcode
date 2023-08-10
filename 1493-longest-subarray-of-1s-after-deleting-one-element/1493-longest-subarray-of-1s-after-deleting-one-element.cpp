class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int z=0,last=0,s=0,ans=INT_MIN;
        for(int e=0;e<nums.size();e++){
            if(nums[e]==0){
                z++;
            }
            if(z>1){
                while(nums[s]!=0){
                    s++;
                }
                s++,z--;
            }
            if(ans<e-s){
            ans=max(ans,e-s);
            }
            if(nums[e]==0){
                // cout<<e<<" changed 0 position\n";
            }
        }
    return ans;
    }
};