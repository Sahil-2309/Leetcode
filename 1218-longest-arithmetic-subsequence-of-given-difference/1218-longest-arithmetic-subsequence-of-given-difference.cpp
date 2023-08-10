class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int, int> dp; 
    int ans = 1; 

    for (int num : arr) {
        if (dp.find(num - difference) != dp.end()) {
            dp[num] = dp[num - difference] + 1;
        } else {
            dp[num] = 1;
        }
        ans=max(ans, dp[num]);
    }

    return ans;
    }
};