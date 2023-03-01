/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void push(vector<vector<int>> &a, TreeNode* root,int level){
        if(!root) return;
        if(level<a.size()) a[level].push_back(root->val);
        else  a.resize(level+1,{root->val});
        push(a,root->left,level+1);
        push(a,root->right,level+1);
            
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        push(a,root,0);
            return a;
    }
};