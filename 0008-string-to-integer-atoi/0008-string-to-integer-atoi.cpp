class Solution {
public:
    int myAtoi(string s) {
        stringstream in(s);
        int x=0;
        in >> x;
        return clamp(x,INT_MIN,INT_MAX);
    }
};