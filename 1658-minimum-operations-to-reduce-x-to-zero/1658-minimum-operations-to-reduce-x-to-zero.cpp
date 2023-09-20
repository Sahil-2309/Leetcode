class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=accumulate(nums.begin(),nums.end(),-x);
        if(sum<0) return -1;
        int ans=INT_MAX;
        int n=nums.size();
        int end=0,start=0,temp=0;
        for(end=0;end<n;end++){
            
            cout<<temp<<endl;
            temp+=nums[end];

            while(temp>sum && start<n){
                temp-=nums[start];
                start++;
            }
            if(temp==sum){
                ans=min(n-end+start-1,ans);
                // cout<<n-end<<"+"<<start<<endl;
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};