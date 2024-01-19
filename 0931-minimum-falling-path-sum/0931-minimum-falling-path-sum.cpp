class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int ans=INT_MAX;

        int n=matrix.size();

        vector<vector<int>> dp(n, vector<int> (n,0));

        for(int i=0;i<n;i++){

            dp[n-1][i]=matrix[n-1][i];

        }

        

        for(int i=n-2;i>=0;i--){

            for(int j=0;j<n;j++){

            int o=INT_MAX,p=INT_MAX,l=INT_MAX;

            if(j-1>=0){
                o=dp[i+1][j-1];
            }
            if(j+1<n){
                p=dp[i+1][j+1];
            }
            l=dp[i+1][j];

            dp[i][j]=min(o,min(p,l))+matrix[i][j];

            // cout<<min(o,min(p,l))+matrix[i][j]<<" ";

            // cout<<" for "<<matrix[i][j]<<" "<<min(o,min(p,l))<<endl;

            }

            // cout<<endl;

        }

        // for(auto v:dp){
        //     for(auto c:v){
        //         cout<<c<<" ";
        //     }
        //     cout<<endl;
        // }

        for(int i=0;i<n;i++){

            ans=min(ans,dp[0][i]);

        }

        return ans;

    }
};