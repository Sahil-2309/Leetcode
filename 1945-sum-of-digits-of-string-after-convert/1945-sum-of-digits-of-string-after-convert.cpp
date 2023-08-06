class Solution {
public:
    int getLucky(string s, int k) {
        long long fromString=0,i=0;
        vector<int> vec;
        while(i<s.length()){
            int j=s[i]-96;
            while(j){
            vec.push_back(j%10);
            j/=10;
            }
            i++;
        }
        fromString=accumulate(vec.begin(),vec.end(),0);k--;
        int ans=0;
        while(k){
            ans=0;
        while(fromString){
            ans+=fromString%10;
            fromString/=10;
        }
        fromString=ans;
        k--;
        }
        return fromString;
        return 0;
    }
};