class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el, c = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (c == 0) {
                el = nums[i];
                c = 1;
            }
            else if (nums[i] == el) {
                c++;
            } else {
                c--;
            }
        }
        c = 0;
        for (auto v : nums) {
            if (el == v)
                c++;
        }
       if (c > (nums.size() / 2)) return el;
    return -1;
    }
};
