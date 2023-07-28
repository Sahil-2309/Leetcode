class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> last;
        for (int idx = 0; idx < nums.size(); ++idx) {
            if (auto it = last.find(nums[idx]); it != last.end()) {
                if (idx - it->second <= k) return true;
            }
            last[nums[idx]] = idx;
        }

        return false;
    }
};