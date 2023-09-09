//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void dfs(vector<vector<int>> &grid,int i,int j,vector<pair<int,int>> &k){
        if(i<0||j<0||i==grid.size()||j==grid[0].size()||grid[i][j]==0) return;
        grid[i][j]=0;
        if(!k.size()){
        k.push_back({i,j});}
        else {
        k.push_back({k[0].first-i,k[0].second-j});    
        }
        
        // cout<<"{ "<<k[0].first-i<<","<<k[0].second-j<<"}, ";
        dfs(grid,i+1,j,k);
        dfs(grid,i-1,j,k);
        dfs(grid,i,j+1,k);
        dfs(grid,i,j-1,k);
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        set<vector<pair<int,int>>> ans;
         for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid[0].size(); j++){
                vector<pair<int,int>> k;
                if (grid[i][j]==1){
                    // cout<<"[ ";
                    dfs(grid,i,j,k);
                    k[0].first=0,k[0].second=0;
                   ans.insert(k);
                //   cout<<"]";
                //   cout<<endl;
                
                }
            }
        }
        // for(auto v:ans){
        //     cout<<"[ ";
        //     for(auto b:v){
        //         cout<<"{"<<b.first<<","<<b.second<<"},";
        //     }
        //     cout<<" ]"<<endl;
        // }
        return ans.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends