class Solution {
public:
    int party(vector<int> & nums,int high,int low){
        int p=nums[high],i=low-1;
        for(int j=low;j<=high;j++){
            if(nums[j]<p){
                i++;
                swap(nums[j],nums[i]);
            }
        }
        swap(nums[high],nums[i+1]);
        return i+1;
    }
    void quicksort(vector<int> &nums,int high,int low){
        if(low<high){
            int p=party(nums,high,low);
            quicksort(nums,high,p+1);
            quicksort(nums,p-1,low);
        }
    }
    void sortColors(vector<int>& nums) {
        quicksort(nums,nums.size()-1,0);
    }
};