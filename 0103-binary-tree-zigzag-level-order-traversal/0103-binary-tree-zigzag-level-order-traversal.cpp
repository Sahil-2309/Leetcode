class Solution {
public:
    vector<vector<int>> ans;
    void push(int level,int d,TreeNode *root){
        if (root==NULL) return;
        if(level<ans.size()) ans[level].push_back(root->val);
        else  ans.resize(level+1,{root->val});
        push(level+1,0,root->left);
        push(level+1,0,root->right);
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        push(0,0,root);
        for(int i=0;i<ans.size();i++){
            if(i%2!=0){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};