class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> a;
        a.push_back(1);
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                a.push_back(i);
                // cout<<i;
            }
        }
        a.push_back(n);
        // for(auto v:a) cout<<v<<" ";
        if(k-1<a.size()) return a[k-1];
        else return -1;
    }
};