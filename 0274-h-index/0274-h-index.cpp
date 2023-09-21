class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size(),ans=0;
        sort(citations.begin(),citations.end());
        for(int i=0;i<n;i++){
            if(n-1-i<citations[i]){
                ans++;
            }
        }
        return ans;
    }
};