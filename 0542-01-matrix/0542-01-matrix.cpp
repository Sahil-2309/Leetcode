class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        vector<int> rc={-1,1,0,0},cr={0,0,-1,1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dis = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int ro=r+rc[i],co=c+cr[i];
                if(ro>=0 && ro<n && co<m && co>=0 && !vis[ro][co]){
                    ans[ro][co]=dis+1;
                    vis[ro][co]=1;
                    q.push({{ro,co},dis+1});
                }
            }

        }
        return ans;
    }
};
