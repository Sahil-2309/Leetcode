//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {
    return p1.second < p2.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int ans=0,e=0;
        vector<pair<int,int>> m;
        for(int i=0;i<n;i++){
            m.push_back(make_pair(start[i],end[i]));
        }
        sort(m.begin(),m.end(),comp);
        e=-1;
        for(auto v:m){
            if(e<v.first){
                ans++;
                e=v.second;
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
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends