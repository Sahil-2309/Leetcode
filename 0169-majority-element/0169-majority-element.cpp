class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> a;
        for(auto v:nums) a[v]++;
        int i,n=nums.size()/2;
        for(auto v:a){
            if(v.second>n) {i=v.first;}
        }
        return i;
    }
};