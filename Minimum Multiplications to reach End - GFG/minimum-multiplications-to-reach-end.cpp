//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {

        queue<pair<int,int>> q;
        vector<int> dis(100000,1e9);
        q.push({start, 0});
        dis[0]=0;
        while(!q.empty()){
            int number = q.front().first;
            int steps = q.front().second;
            q.pop();
            if(number==end) return steps;
            for(auto v : arr){
                int newNumber = (number * v) % 100000;
                if(newNumber==end) return steps+1;
                if (dis[newNumber]> steps+1) {
                    dis[newNumber] = steps+1;
                    q.push({newNumber, steps + 1});
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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends