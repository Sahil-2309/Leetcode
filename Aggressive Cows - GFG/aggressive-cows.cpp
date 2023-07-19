//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool check(int m,vector<int> a,int n,int k){
        int c=1,l=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-l>=m){
                c++;
                l=a[i];
            }
        }
            if(c>=k) return 1;
        return 0;
    }
    int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
    int i=0,j=stalls[n-1]-stalls[0]+1,ans;
    while(i<=j){
        int m=(i+j)/2;
        if(check(m,stalls,n,k)){
            ans=m;
            i=m+1;
        }
        else j=m-1;
    }
    return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends