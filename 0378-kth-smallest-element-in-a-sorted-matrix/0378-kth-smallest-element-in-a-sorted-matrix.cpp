class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> a;
        for(auto v:matrix){
            for(auto c:v){
                a.push_back(c);
            }
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};