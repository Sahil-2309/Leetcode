class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind , ind2;
        for(ind= n-2; ind >= 0; ind--){
            if(nums[ind] < nums[ind+1]) {
                break;
            }
        }
        if(ind < 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(ind2 = n-1; ind2>ind; ind2--){
                if(nums[ind2] > nums[ind]){
                    break;
                }
            }
            swap(nums[ind], nums[ind2]);
            reverse(nums.begin() + ind+1, nums.end());
        }
    }
};