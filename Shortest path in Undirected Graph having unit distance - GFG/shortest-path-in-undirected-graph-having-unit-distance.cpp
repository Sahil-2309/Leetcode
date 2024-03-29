//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<vector<int>> adjList(N);
        for(auto v:edges){
            adjList[v[0]].push_back(v[1]);
            adjList[v[1]].push_back(v[0]);
        }
        vector<int> dis(N,1e9);
        dis[src]=0;
        queue<int> q;
        q.push(src);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto v:adjList[node]){
                if(dis[v]>dis[node]+1){
                    dis[v]=dis[node]+1;
                q.push(v);
                }
            }
        }
        vector<int> ans(N,-1);
        for(int i=0;i<N;i++){
            if(dis[i]<1e9){
                ans[i]=dis[i];
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends