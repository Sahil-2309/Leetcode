class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int m = (l + r) / 2;
            if (m == 0 && nums[1] != nums[0]) return nums[0];
            if (m == nums.size() - 1 && nums[nums.size() - 2] != nums[nums.size() - 1]) return nums[nums.size() - 1];
            if ((m > 0 && nums[m] != nums[m - 1]) && nums[m] != nums[m + 1]) {
                return nums[m];
            }
            else if (((m > 0 && nums[m] == nums[m - 1]) && m % 2) || (nums[m] == nums[m + 1] && !(m % 2))) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        return nums[l];
    }
};
