class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        int i,j;
        i=j=0;
        int ans=0;
        set<char> a;
        for (int i=0;i<s.length();i++){
            while(a.count(s[i])){
                   a.erase(s[j]);
                j++;
            }
            a.insert(s[i]);
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};