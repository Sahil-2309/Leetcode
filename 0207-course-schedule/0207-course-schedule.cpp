class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& p) {
        vector<int> outde(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(auto v:p){
            outde[v[0]]++;
            adj[v[1]].push_back(v[0]);
        }
        
        queue<int> q;
        for(int i=0;i<outde.size();i++){
            if(!outde[i]){
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
	       int n=q.front();
	       q.pop();
        //    cout<<n<<endl;
	       ans.push_back(n);
	       for(auto i:adj[n]){
            //    cout<<i<<endl;
	           outde[i]--;
	           if(!outde[i]) q.push(i);
	       }
	   }
        if(ans.size()==numCourses) return 1;
        return 0;
    }
};