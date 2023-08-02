class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int ans=0,temp=1,c=1;

        for(int i=1;i!=word.length();i++)      {
            if(word[i]==word[i-1]){
                temp++;
            }else if(word[i-1]<word[i]){
                temp++;
                c++;
            }else{
                c=1;
                temp=1;
            }
            if(c==5){
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};