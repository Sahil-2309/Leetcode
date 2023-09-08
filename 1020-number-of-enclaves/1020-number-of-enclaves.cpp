class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0,o=0,p=0;
        vector<vector<int>> vis(n,vector<int> (m,0));
        queue<pair<int,int>> q;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 ||i==n-1 ||j==m-1){
                    if(grid[i][j]==1)
                    q.push({i,j}),vis[i][j]=1,o--;
                }
                if(grid[i][j]) o++;
            }
        }
        vector<int> rc={-1,1,0,0},cr={0,0,1,-1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int ro=r+rc[i],co=c+cr[i];
                if(ro>=0 && co>=0 && co<m && ro<n && grid[ro][co]==1 && !vis[ro][co]){
                    q.push({ro,co});
                    vis[ro][co]=1;
                    o--;
                }
            }
        }        
        return o;
    }
};