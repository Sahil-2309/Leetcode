//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(std::vector<int>& nums, int n) {
        int maxLength = 0;
       unordered_map<int,int> m;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum+=nums[i];
            if(sum==0){
            maxLength=i+1;
            }
            else{
                if(m.find(sum)!=m.end()){
                    maxLength=max(maxLength,i-m[sum]);
                }
                else{
                    m[sum]=i;
                }
            }
        
        }

        return maxLength;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends