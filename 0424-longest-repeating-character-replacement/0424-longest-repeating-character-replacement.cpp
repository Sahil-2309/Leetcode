class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=INT_MIN,i=0,j=0,maxf=INT_MIN;
        map<char,int> m;
        for(j=0;j<s.length();j++){
            m[s[j]]++;
            maxf=max(maxf,m[s[j]]);
            while(j-i-maxf+1>k){
                m[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};