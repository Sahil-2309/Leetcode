class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int o=matrix[0].size();
        o--;
       for(int i=matrix.size()-1;i>=0;i--){
           if(matrix[i][0]<=target){
               int s=0,e=o;
               while(s<=e){
                   int m=(s+e)/2;
                   if(matrix[i][m]==target){
                       return 1;
                   }
                   else if(matrix[i][m]>target){
                       e=m-1;
                   }
                   else s=m+1;
               }

           }
       }
       return 0; 
    }
};