class Solution {
public:
    int solve(vector<vector<int>> &t,int i,int j,vector<vector<int>> &dp){
        if(i==t.size()-1){
            return t[i][j];
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int a=t[i][j],b=t[i][j];
        a+=solve(t,i+1,j,dp);
        b+=solve(t,i+1,j+1,dp);
        dp[i][j]=min(a,b);
        return dp[i][j];

    }
    int minimumTotal(vector<vector<int>>& triangle) {
         int n = triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return  solve(triangle,0,0,dp);;
    }
};
