class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        
        vector<int> row(n),col(m);

        vector<vector<int>> ans(n,vector<int> (m));

        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=grid[i][j];
            }
            col[j]=sum;    
        }
        for(int i=0;i<n;i++){
            int sum=0;
        for(int j=0;j<m;j++){
                sum+=grid[i][j];
            }
            row[i]=sum;    
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=row[i]+col[j]-(n-row[i])-(m-col[j]);
            }
        }
        return ans;
    }
};