class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>> vis(n,vector<int> (m,1));
        queue<pair<int,int>> b;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 ||i==n-1 ||j==m-1){
                    if(board[i][j]=='O')
                    b.push({i,j}),vis[i][j]=0;
                }
            }
        }
        
        vector<int> rc={-1,1,0,0},cr={0,0,-1,1};
        while(!b.empty()){
            int r=b.front().first;
            int c=b.front().second;
            b.pop();
            for(int i=0;i<4;i++){
                int ro=r+rc[i],co=c+cr[i];
                if(ro>0 && co>0 && co<m && ro<n && vis[ro][co] && board[ro][co]=='O'){
                    b.push({ro,co});
                    vis[ro][co]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]) board[i][j]='O';
                else board[i][j]='X';
            }
        }
        

    }
};