class Solution {
public:
    void solve(vector<vector<int>> &a,vector<int> c,int t,int i,vector<int> &temp){
        if(i==c.size()){
        if(t==0){
            a.push_back(temp);
        }
        return ;
        }
        if(c[i]<=t){
            temp.push_back(c[i]);
            solve(a,c,t-c[i],i,temp);
            temp.pop_back();
        }
       solve(a,c,t,i+1,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,candidates,target,0,temp);
        return ans;
    }
};