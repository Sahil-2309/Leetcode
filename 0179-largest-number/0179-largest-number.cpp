class Solution {
public:
    static bool comp(int a,int b){
    return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
    string largestNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        string ans = "";
        for(int i = 0;i<arr.size();i++)
        ans+=to_string(arr[i]);
        if(ans[0]=='0') return "0";
        return ans; 
    }
};