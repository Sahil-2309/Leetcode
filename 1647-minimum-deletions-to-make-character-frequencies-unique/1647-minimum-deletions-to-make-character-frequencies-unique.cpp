class Solution {
public:
    int minDeletions(string s) {
        vector<int> alpha(26,0);
        for(auto v:s){
            alpha[v-'a']++;
        }
        int ans=0;
        vector<int> sorted;
        for (auto v : alpha) {
             if (v != 0) {
                 sorted.push_back(v);
                }
        }
        sort(sorted.begin(),sorted.end(),greater<int>());
        for(int i=1;i<sorted.size();i++){
                if(sorted[i-1]<=sorted[i]){
                    int k=sorted[i];
                    if(sorted[i]==1){
                        ans++;
                        continue;
                    }
                    sorted[i]=sorted[i-1]-1;
                    if(sorted[i]<0) sorted[i]=0;
                    ans+=k-sorted[i];
                    cout<<ans<<endl;
                }
        }
        for(auto v:sorted) cout<<v<<endl;
        return abs(ans);
    }
};