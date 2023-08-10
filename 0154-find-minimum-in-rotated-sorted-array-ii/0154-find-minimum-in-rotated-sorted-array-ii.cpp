class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1,n=nums.size();
        while(s<e){
            cout<<s<<" "<<e<<endl;
            if(nums[s]<nums[e]) return nums[s];
            int mid=(s+e)/2;
            if(nums[mid]==nums[s]){
                s++;
                continue;
            }
            if(nums[mid]==nums[e]){
                e--;
                continue;

            }
           if(nums[mid]>=nums[s]){
                s=mid+1;
            }
            else e=mid;
        }
        return nums[s];
    }
};