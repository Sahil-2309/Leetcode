class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==1) return 1;
        int canreach=0;
        for(int i=0;i<nums.size();i++)
        {
            if(canreach<i){
                return 0;
            }
            canreach = max(canreach,i+nums[i]);
        }
        return 1;
    }
};