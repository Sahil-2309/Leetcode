
class Solution {
    TreeNode *first,*prev,*middle,*last;
public:
    void inorder(TreeNode * root){
        if(root==NULL) return;
        inorder(root->left);
        if(prev!=NULL &&(root->val<prev->val)){
            if(first==NULL){
                first=prev;
                middle=root;
            }
            else last=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        if(!root) return;
        first=middle=last=NULL;
        prev= new TreeNode(INT_MIN);
        inorder(root);
        if(first && last) swap(first->val,last->val);
        else if(first && middle) swap(first->val,middle->val);
    }
};