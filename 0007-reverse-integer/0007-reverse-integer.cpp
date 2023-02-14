class Solution {
public:
    int reverse(long long int x) {
        long long int n=0,c=0;
        if(x<0){
x=x*(-1);
        c=1;}
        while(x>0){
n=n*10+x%10;
x=x/10;            
        }
        if(c==1){
            n*=-1;
        }
        if(n>=(pow(2,31))||n<=(pow(-2,31))){
            return 0;
        }
        return n;
    }
};