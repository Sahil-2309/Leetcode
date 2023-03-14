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
    void helper(string l ,TreeNode *root,int &ans){
        if(!root->left && !root->right){
            l+=to_string(root->val);
            ans+=stoi(l);
            // cout<<l<<" pushed ";
            return;
        }
        if(root->left){
        helper(l+to_string(root->val),root->left,ans);}
        if(root->right){
        helper(l+to_string(root->val),root->right,ans);
        }
    }
    int sumNumbers(TreeNode* root) {
     if(!root) return 0;
    //  vector<string> s;
     int ans=0;
     helper("",root,ans);  
     return ans;
    }
};