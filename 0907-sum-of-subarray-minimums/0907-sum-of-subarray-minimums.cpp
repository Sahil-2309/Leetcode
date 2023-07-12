class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long ans=0;
        
        stack<pair<int,int>> s1,s2;
        
        vector<int> left(arr.size()),right(arr.size());
        
        for(int i=0;i<arr.size();i++){
            int c=1;
            while(!s1.empty() && (s1.top().first)>arr[i]){
                c+=s1.top().second;
                s1.pop();
            }
            s1.push({arr[i],c});
            left[i]=c;
        }
        for(int i=arr.size()-1;i>=0;i--){
            int c=1;
            while(!s2.empty() && (s2.top().first)>=arr[i]){
                c+=s2.top().second;
                s2.pop();
            }
            s2.push({arr[i],c});
            right[i]=c;
        }
        for(int i=0;i<arr.size();i++){
            ans=ans+static_cast<long long>(arr[i])*right[i]*left[i];
            ans%=1000000007;
        }
        return static_cast<int>(ans);
    }
};
