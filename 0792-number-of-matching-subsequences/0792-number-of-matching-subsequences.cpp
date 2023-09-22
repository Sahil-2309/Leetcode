class Solution {
public:
    bool isSubs(string& s, string& t, int m, int n) {
        if(m == 0) return true;
        if(n == 0) return false;
        if(s[m-1] == t[n-1]) return isSubs(s, t, m-1, n-1);
        return isSubs(s, t, m, n-1);
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        for(auto v:words){
            if(isSubs(v,s,v.length(),s.length())) ans++;
        }
        return ans;
    }
};