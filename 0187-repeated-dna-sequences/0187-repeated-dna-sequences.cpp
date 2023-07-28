class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.length() < 10) return {};
        vector<string> ans;
        int l = 0, r;
        unordered_set<string> k;
        for (l = 0; l + 10 <= s.length(); l++) { 
            string current = s.substr(l, 10);
            if (k.count(current) == 1) {
                if (count(ans.begin(), ans.end(), current) == 0) {
                    ans.push_back(current);
                }
            } else {
                k.insert(current);
            }
        }
        return ans;
    }
};
