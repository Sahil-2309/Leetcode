class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int c,c2,e,e2;
      c=c2=0;
      for(auto v:nums){
        if(c==0 && e2!=v){
        c=1,e=v;
        }
        else if(c2==0 && e!=v){
            c2=1,e2=v;
        }
        else if(v==e) c++;
        else if(v==e2) c2++;
        else c--,c2--;  
      }
      c=c2=0;
      for(auto v:nums){
        if(v==e) c++;
        if(v==e2) c2++;  
      }
    vector<int> ans;
      if(c>(nums.size()/3)) ans.push_back(e);
      if(c2>(nums.size()/3)) ans.push_back(e2);
    sort(ans.begin(),ans.end());
      return ans;  
        
    }
};