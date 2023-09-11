class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        multimap<int,int> mp;
        int n=groupSizes.size();
        for(int i=0;i<n;i++){
            mp.insert(make_pair(groupSizes[i], i));
        }
        vector<vector<int>> ans;
        for(auto it=mp.begin();it!=mp.end();){
            int i=0;
            int k=it->first;
            vector<int> temp;
            while(i<k){
                temp.push_back(it->second);
                it++,i++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};