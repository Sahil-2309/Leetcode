class Solution {
public:
    string trim(string &s)
    {
        int i = 0;
        while(i < s.size()){
            if(s[i] != ' '){
                i++;
                continue;
            }
            int st = i;
            while(i < s.size() && s[i] == ' '){
                i++;
            }
            s.erase(st, i - 1 - st);
            i = st + 1;
        }
        if(s[0] == ' ') s.erase(0, 1);
        if(s[s.size() - 1] == ' ') s.erase(s.size()-1, 1);
        return s;
    }
    
    string reverseWords(string s) {
        trim(s);
        reverse(s.begin(), s.end());
        cout << s << endl;
        
        int i = 0;
        while(i < s.size()){
            int st = i;
            while(i < s.size() && s[i] != ' '){
                i++;
            }
            reverse(s.begin() + st, s.begin() + i);
            i++;
        }
        
        return s;
    }
};