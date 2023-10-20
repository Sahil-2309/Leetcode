//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, pair<int, int> source, pair<int, int> destination) {
        if (source.first == destination.first &&
            source.second == destination.second)
            return 0;
        int N = grid.size();
        int M = grid[0].size();
        vector<vector<int>> dis(N, vector<int>(M, INT_MAX));
        dis[source.first][source.second] = 0;
        
        queue<pair<int, pair<int, int>>> pq;
        pq.push({0, source});
        
        vector<int> rowOffset = {-1, 0, 1, 0};
        vector<int> colOffset = {0, 1, 0, -1};
        int destinationX = destination.first;
        int destinationY = destination.second;
        
        while (!pq.empty()) {
            int dist = pq.front().first;
            int row = pq.front().second.first;
            int col = pq.front().second.second;
            pq.pop();
            
            for (int i = 0; i < 4; i++) {
                int r = row + rowOffset[i];
                int c = col + colOffset[i];
                if (r >= 0 && c >= 0 && r < N && c < M && grid[r][c] == 1 && dist + 1 < dis[r][c]) {
                    dis[r][c] = dist + 1;
                    if (r == destinationX && c == destinationY) {
                        return dist + 1;
                    }
                    pq.push({dis[r][c], {r, c}});
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends