class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> a;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    a.push_back({i,j});
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
        for(auto v:a){
            for(int i=0;i<matrix.size();i++){
                matrix[i][v[1]]=0;
            }
            for(int i=0;i<matrix[0].size();i++){
                matrix[v[0]][i]=0;
            }
        }
    }
};