class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0,e=height.size()-1,ans=INT_MIN;
        while(s!=e){
            ans=max(ans,((e-s)*min(height[s],height[e])));
            if(height[s]<height[e]){
                s++;
            }else e--;
        }
return ans;
        
    }
};