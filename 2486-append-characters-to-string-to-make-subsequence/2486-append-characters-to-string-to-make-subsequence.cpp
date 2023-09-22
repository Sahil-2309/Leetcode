class Solution {
public:
    void subs(string &s, string &t,int i,int j, int n, int m) {
        if (j == m || i== n) return; 
        cout<<s[i]<<" "<<t[0]<<endl;
        if (s[i] == t[0]) {
            t.erase(0, 1);
            subs(s, t, i + 1, j + 1,n,m);
        }
        else {
            subs(s, t, i + 1, j ,n,m);
        }
    }

    int appendCharacters(string s, string t) {
        int ans;
        int n = s.length(), m = t.length();
        subs(s, t,0,0, n, m);
        ans = t.length();
        cout << t << endl;
        return ans;
    }
};
