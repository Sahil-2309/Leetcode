class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
       int n=graph.size();
       vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]!=-1){
                continue;
            }
             color[i]=0;
       queue<int> q;
       q.push(i);
       while(!q.empty()){
           int o=q.front();
           int c=color[o];
           q.pop();
           for(auto v:graph[o]){
               if(color[v]!=-1 && color[v]==c){
                   return false;
               }
               else if(color[v]!=-1 && color[v]==(!c)) continue;
               else{
                   q.push(v);
                   color[v]=!c;
               }
           }
       }
        }
       for(auto v:color){
           cout<<v<<" ";
       }
       return 1;
    }
};