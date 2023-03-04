class Solution {
public:
    int maxip(TreeNode *root,int &maxi){
        if(root==NULL) return 0;
        int left=max(0,maxip(root->left,maxi)),right=max(0,maxip(root->right,maxi));
        maxi=max(maxi,left+right+root->val);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
      int maxi=INT_MIN;
      maxip(root,maxi);
      return maxi;
    }
};