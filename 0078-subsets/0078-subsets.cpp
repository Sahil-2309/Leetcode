class Solution {
public:
    void helper(vector<vector<int>> &ans,vector<int> nums,int index,vector<int> &tmp){
        if(index==nums.size()){
            ans.push_back(tmp);
            return;
        }
        tmp.push_back(nums[index]);
        helper(ans,nums,index+1,tmp);
        tmp.pop_back();
        helper(ans,nums,index+1,tmp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        helper(ans,nums,0,tmp);
        return ans;
    }
};