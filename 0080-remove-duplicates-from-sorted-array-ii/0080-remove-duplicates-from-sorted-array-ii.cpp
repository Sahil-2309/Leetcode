class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=nums[0],c=1,ans=1;
        for(int i=1;i<nums.size();){
            if(j==nums[i] && c==1){
                ans+=1;
                c++;
                i++;
            }
            else if(j==nums[i] && c>=2){
                cout<<"erased "<<nums[i]<<endl;
                nums.erase(nums.begin()+i);
                // ans+=1;
                // i++;
            }
            else if(j!=nums[i]){
                j=nums[i];
                c=1;
                ans++;
                i++;
            }
            // cout<<" j is "<<j<<endl;
        }
        for(auto v:nums){
            cout<<v<<" ";
        }
        return ans;
    }
};