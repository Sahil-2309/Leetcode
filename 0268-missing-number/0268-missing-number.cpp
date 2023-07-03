class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]-1){
                return nums[i]-1;
            }
        }
        if(nums[nums.size()-1]!=nums.size()){
            return nums.size();
        }
        return 0;
    }
};