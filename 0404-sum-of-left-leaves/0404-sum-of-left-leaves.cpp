class Solution {
public:
    void help(TreeNode* root ,int &ans){
        if(!root){
            return;
        }
        // cout<<root->val<<" ";
        if(root->left && !root->left->left && !root->left->right){
            ans+=root->left->val;
        }
        help(root->left,ans);
        help(root->right,ans);
    }
    int sumOfLeftLeaves(TreeNode* root)   {
        int ans=0;
        help(root,ans);
        return ans;
    }
};