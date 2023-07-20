
             

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
         if(!root) return{};
         vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int> a;
        for(int i=0;i<n;i++){
            TreeNode *p=q.front();
               if (i == n - 1)
                    ans.push_back(p->val);
            q.pop();
            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }
    }
        return ans;
    }
};