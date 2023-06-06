class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto v:nums){
            m[v]++;
        }
        vector<pair<int,int>> b;
        for(auto it:m){
            b.push_back(make_pair(it.second,it.first));
        }
        sort(b.begin(), b.end(), [](const auto& a, const auto& b) {
        return a.first > b.first;
        });
        vector<int> ans;
        for(auto v:b){
            if(k--)ans.push_back(v.second);
            else break;
        }           
        return ans;
    }
};