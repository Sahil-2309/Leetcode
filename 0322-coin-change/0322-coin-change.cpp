class Solution {
public:
    int helper(vector<int> &coins,int a,vector<int> &dp){
       dp[0]=0;
       for(int i=0;i<=a;i++){
           for(int j=0;j<coins.size();j++){
               if(i-coins[j]>=0 and dp[i-coins[j]]!=INT_MAX){
                   dp[i]=min(dp[i],1+dp[i-coins[j]]);
               }
           }
       }
       if(dp[a]==INT_MAX) return -1;
       return dp[a];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,INT_MAX);
        int ans=helper(coins,amount,dp);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};