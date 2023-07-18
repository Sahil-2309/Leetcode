class Solution {
public:
    int trap(vector<int>& arr) {
        int ans=0;
        vector<int> p(arr.size()),s(arr.size());
        int i=0,j=arr.size()-1;
        p[i]=arr[i],s[j]=arr[j];
        for( i=1;i<arr.size();i++){
            p[i] = max(p[i-1],arr[i]);
        }
        for( i=j-1;i>=0;i--){
            s[i] = max(s[i+1],arr[i]);
        }
        for(int i=0;i<=j;i++){
            ans+=min(p[i],s[i])-arr[i];
        } 
        return ans;
    }
};