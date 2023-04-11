class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ans="";
        for(auto c:s){
            if(c=='*') st.pop();
            else st.push(c);
        }
        while(!st.empty()){
        char c=st.top();
            ans+=c;
            st.pop();
        }
                reverse(ans.begin(),ans.end());

        return ans;
    }
};