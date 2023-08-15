/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> l,g;
        ListNode *p=head;
        while(p){
            if(p->val<x){
                l.push_back(p->val);
            }else g.push_back(p->val);
            p=p->next;
        }
        p=head;
        int n=l.size(),i=0;
        while(i<n){
            p->val=l[i];
            p=p->next;
            i++;
        }
        i=0,n=g.size();
         while(i<n){
            p->val=g[i];
            i++;
            p=p->next;
        }
        return head;
    }
};