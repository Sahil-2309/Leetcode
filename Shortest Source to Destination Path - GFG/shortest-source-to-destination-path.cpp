//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int ans=INT_MAX;
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        if(!X && !Y) return 0;
        vector<vector<int>> dis(N,vector<int> (M,INT_MAX));
        queue<pair<int,pair<int,int>>> pq;
        dis[0][0]=0;
        vector<int> ro{-1,0,1,0};
        vector<int> co{0,1,0,-1};
        if(A[0][0]!=0)
        pq.push({0,{0,0}});
        while(!pq.empty()){
            int dist=pq.front().first;
            int row=pq.front().second.first;
            int col=pq.front().second.second;
            pq.pop();
            for(int i=0;i<4;i++){
                int r=row+ro[i];
                int c=col+co[i];
                if(r>=0 && c>=0 && r<N && c<M && A[r][c]==1 && dist+1<dis[r][c]){
                    dis[r][c]=dist+1;
                    if(r==X && c==Y){
                        return dist+1;
                    }
                    pq.push({dis[r][c],{r,c}});
                }
                
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends