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
    ListNode *head,*itr;
    int l=0;
    Solution(ListNode* head) {
        this->head=head;
        itr=head;        
        while(itr){
        itr=itr->next;
        l++;
        }
    }
    
    int getRandom() {
        itr=head;
        int i=rand()%l;
        while(i--){
            itr=itr->next;
        }
        return itr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */