class Solution {
public:
    int help(int i, int a, vector<int>& coins,vector<vector<int>> &dp) {
        if (a == 0) {
            return 1;
        }
        if (i == coins.size()) {
            return 0;
        }
        if (dp[i][a] != -1) {
            return dp[i][a];
        }
        
        int waysWithoutCurrentCoin = help(i + 1, a, coins,dp);
        int waysWithCurrentCoin = 0;
        if (coins[i] <= a) {
            waysWithCurrentCoin = help(i, a - coins[i], coins,dp);
        }
        
        dp[i][a] = waysWithoutCurrentCoin + waysWithCurrentCoin;
        return dp[i][a];
    }
    
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(),vector<int> (amount+1,-1));
        for(int i=0;i<coins.size();i++){
            dp[i][0]=0;
        }
        return help(0, amount, coins,dp);
    }
};
