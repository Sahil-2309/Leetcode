class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(mid >0 && nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid+1]){
                j=mid-1;
            }
            else i=mid+1;
        }
        return -1;
    }
};