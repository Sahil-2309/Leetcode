class Solution {
public:
    int solve(vector<int> &days,vector<int> &cost,int index,vector<int> &dp){
        
        if(index>=days.size()){
          return 0;
        }
        if(dp[index]!=-1){
          return dp[index];
        }
        int a=cost[0]+solve(days,cost,index+1,dp);
        
        int i;
        for( i=index;i<days.size() && days[i]<days[index]+7;i++){}
        
        int b=cost[1]+solve(days,cost,i,dp);
        
        for( i=index;i<days.size() && days[i]<days[index]+30;i++){}
        
        int c=cost[2]+solve(days,cost,i,dp);
        
       dp[index]= min(a,min(b,c));
        return dp[index];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1,-1);
        return solve(days,costs,0,dp);
    }
}; 