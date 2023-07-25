class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> &temp, vector<int> &c, int t, int start) {
        if (t == 0) {
            ans.push_back(temp);
            return;
        }
        
        for (int i = start; i < c.size() && c[i] <= t; i++) {
            if (i == start || c[i] != c[i-1]) {
                temp.push_back(c[i]);
                solve(ans, temp, c, t-c[i], i+1);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(ans, temp, candidates, target, 0);
        return ans;
    }
};
