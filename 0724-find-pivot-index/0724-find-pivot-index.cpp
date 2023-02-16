class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int i=0,r=0,l=0;
        while(i<nums.size()){
            r+=nums[i];i++;
        }i=0;
        while(i<nums.size()){
            r-=nums[i];
            if(r==l) return i;
            l+=nums[i];
            i++;
        }
        return -1;
    }
};