class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        vector<int> cos(n,INT_MAX);
        queue<pair<int,pair<int,int>>> q;
        for(auto v:flights){
            adj[v[0]].push_back({v[1],v[2]});
        }
        q.push({0,{src,0}});
        cos[src]=0;
        while(!q.empty()){
            int stops=q.front().first;
            int node=q.front().second.first;
            int cost=q.front().second.second;
            q.pop();
            if(stops>k){
                continue;
            }
            for(auto i:adj[node]){
                int stop = i.first;
                int costs = i.second;
                if(costs + cost < cos[stop] && stops<=k){
                    cos[stop]=costs+cost;
                    q.push({stops+1,{stop,cos[stop]}});
                    cout<<stop<<" stop costs "<<cos[stop]<<" when "<<stops<<" is stop "<<k<<endl;
                }
            }
        }

        return cos[dst]==INT_MAX?-1:cos[dst];
    }
};