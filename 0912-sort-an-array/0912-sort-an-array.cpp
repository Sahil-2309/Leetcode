class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans;
        map<int,int> ma;
        for(auto v:nums){
            ma[v]++;
        }
        for(auto v:ma){
            int i=v.second;
            while(i--){
                ans.push_back(v.first);
            }
        }
        return ans;
        
    }
};