class Solution {
public:
    void coun(TreeNode *root, int &c){
        if(!root) return;
        c++;
        coun(root->left,c);
        coun(root->right,c);
    }
    bool helper(TreeNode *root,int i,int c){
        if(!root) return true;
        if(i>=c) return false;
        return helper(root->left,2*i+1,c) && helper(root->right,2*i+2,c);
    }
    bool isCompleteTree(TreeNode* root) {
        int c=0;
        coun(root,c);
     return helper(root,0,c);   
    }
};