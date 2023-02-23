//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    typedef pair<int, int> pi;
    int maxMeetings(int start[], int end[], int n)
    { 

        int time=abs(*min_element(start,start+n) - *max_element(end,end+n)),ans=0;
        priority_queue <pi, vector<pi>, greater<pi>> ma;
        for(int i =0;i<n;i++){
            ma.push(make_pair(end[i],start[i]));
        }
        int prev=INT_MIN;
        while(!ma.empty()){
            pi top= ma.top();
            if(top.second>prev){
                ans++;
              prev=top.first;
            }
            ma.pop();
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