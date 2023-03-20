
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        if(nums.size()==1) return 0;
        // nums.push_back(INT_MIN);
        while(s<e-1){
            int m=(s+e)/2;
            if(nums[m]>nums[m-1] && nums[m]>nums[m+1]){
                return m;
            }
            else if( nums[m]>nums[m+1]) {
                e=m-1;
            }
            else s=m+1;
            }
        return nums[s]>nums[e]?s:e;
    }
};