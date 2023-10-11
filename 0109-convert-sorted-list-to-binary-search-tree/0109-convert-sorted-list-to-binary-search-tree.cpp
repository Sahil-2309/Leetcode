class Solution {
public:
    TreeNode* help(ListNode* head){
        if(!head) return NULL;
        ListNode *fast,*slow,*p;
        fast=slow=head;
        while(fast && fast->next){
            p=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(p)
        p->next=NULL;
        ListNode* aage;
        aage=slow->next;
        slow->next=NULL;
        TreeNode *ans=new TreeNode(slow->val);
        if(slow!=head)
        ans->left=help(head);
        ans->right=help(aage);
        return ans;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode *ans;
        ans=help(head);
        return ans;
    }
};