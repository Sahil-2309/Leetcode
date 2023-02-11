class Solution {
public:
    vector<string> s={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void add(string c,int i,string digits,vector<string> s,vector<string> &ans){
        if(i==digits.size()){
            ans.push_back(c);
            return;
        }
     for(auto v: s[digits[i] - '0'])
     {
        add(c+v,i+1,digits,s,ans);
     }
    }
    vector<string> letterCombinations(string digits) {
         if(digits.size()==0) return {};
        vector<string> ans;
        add("",0,digits,s,ans);
        return ans;
    }
};
