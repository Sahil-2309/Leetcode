class Solution {
public:
    bool dfs(int i,vector<int> &vis,vector<int> &path,vector<int> &check,vector<vector<int>> &graph){
      vis[i]=1,path[i]=1;
      for(auto v:graph[i]){
        if(!vis[v]){
          if(dfs(v,vis,path,check,graph)){
            return true;
          }
        }
        else if(path[v]){
          return true;
        }
      }
      check[i]=1;
      path[i]=0;
      return false;

    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n,0),path(n,0),ans,check(n,0);
        for(int i=0;i<n;i++){
          if(!vis[i]) dfs(i,vis,path,check,graph);
        }
        for(int i=0;i<n;i++){
          if(check[i]) ans.push_back(i);
        }
        return ans;
    }
};