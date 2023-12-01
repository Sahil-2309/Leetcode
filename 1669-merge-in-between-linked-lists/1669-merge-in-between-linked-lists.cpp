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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *p=list1,*q=list2,*l;

        l=q;

        while(l->next!=NULL) {
            l=l->next;
        }

        int i=1;

        while(i!=a && p!=NULL){

            cout<<i<<" ";
            p=p->next;
            i++;


        }
        // cout<<p->val<<"' a ";
        ListNode *k=p;
        while(i<=b+1 && p!=NULL){

            cout<<i<<" ";
            p=p->next;
            i++;
        }
        // cout<<p->val<<" b ";
        l->next=p;


        k->next=q;
    
        return list1;
    
    }
};