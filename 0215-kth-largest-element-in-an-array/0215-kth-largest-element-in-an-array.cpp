class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        int i=0;
        for(auto v:nums){
            p.push(v);
        }
        k--;
        while(k--) {
            p.pop();
        }
        return p.top();
    }
};