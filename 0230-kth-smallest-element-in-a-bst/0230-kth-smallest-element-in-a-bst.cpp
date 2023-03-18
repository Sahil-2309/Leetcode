// int count=0;
// int ans=0;
// void inorder(TreeNode*root,int k)
// { if(root->left != NULL) 
//    {inorder(root->left,k);}
//    count++;
//    if(count ==k)
//    {ans=root->val;
//    return;}
//    if(root->right!=NULL){
//        inorder(root->right,k);
//    }}
//     int kthSmallest(TreeNode* root, int k) {inorder(root,k);
//     return ans;
        
//     }
// };
class Solution {
public:
    int step=0;
    int ans=0;
    void dfs(TreeNode * root,int k){
        if(root->left) dfs(root->left,k);
        step++;
        if(step==k) {ans=root->val; return;}
        if(root->right) dfs(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        dfs(root,k);
        return ans;
    }
};