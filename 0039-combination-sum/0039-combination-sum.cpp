class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &c,int t,int i,vector<int> &temp){
       if(i==c.size()){
           if(t==0){
               ans.push_back(temp);
               return;
           }
               return;
       }
       if(c[i]<=t){
       temp.push_back(c[i]);
       solve(ans,c,t-c[i],i,temp);
       temp.pop_back();
       }
       solve(ans,c,t,i+1,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(candidates.size()==1&&target!=candidates[0])return {};
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,candidates,target,0,temp);
        return ans;
    }
};