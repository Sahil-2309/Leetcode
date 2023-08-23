//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void help(vector<int> &vis,vector<int> &dfs,vector<int> adj[],int i){
        // if(vis[i]) return ;
        vis[i]=1;
        dfs.push_back(i);
        for(auto k:adj[i]){
            if(!vis[k])
            help(vis,dfs,adj,k);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      vector<int> vis(V,0);
      vis[0]=1;
      vector<int> dfs;
      help(vis,dfs,adj,0);
      return dfs;
      
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends