class Solution {
public:
  
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ma;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++) {
            string k=strs[i];
            sort(k.begin(),k.end());
            ma[k].push_back(strs[i]);
        }
        for(auto v:ma){
        ans.push_back(v.second);
        }
        return ans;
    }
};