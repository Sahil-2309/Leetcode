// if (left > right) return NULL;
//         int pivot = left;  // find the root from inorder
//         while(inorder[pivot] != preorder[rootIdx]) pivot++;
        
//         rootIdx++;
//         TreeNode* newNode = new TreeNode(inorder[pivot]);
//         newNode->left = build(preorder, inorder, rootIdx, left, pivot-1);
//         newNode->right = build(preorder, inorder, rootIdx, pivot+1, right);
//         return newNode;

class Solution {
public:
    TreeNode* helper(vector<int> &preorder,vector<int> &inorder,int &i,int left,int right){
         if (left > right) return NULL;
        int r = left;
        TreeNode* root = new TreeNode(preorder[i]);
        while(inorder[r] != preorder[i]) r++;
        i++;
        root->left = helper(preorder, inorder, i, left, r-1);
        root->right = helper(preorder, inorder, i, r+1, right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int r=0;
        return helper(preorder,inorder,r,0,preorder.size()-1);
    }
};