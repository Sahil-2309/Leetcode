class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto v:nums){
            if(s.find(v)!=s.end()){
                return 1;
            }
            s.insert(v);
        }
        return 0;

    }
};