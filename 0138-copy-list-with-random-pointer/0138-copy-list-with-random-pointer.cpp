/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
     if(head==NULL) return head;
     Node *p=head;
     while(p){
         Node *t= new Node(p->val);
         t->next=p->next;
         p->next=t;
         p=p->next->next;
     }
     p=head;
     while(p){
        if(p->random)
        p->next->random=p->random->next;
        p=p->next->next;
     }
     Node* newHead = head->next;
        p = head;
        while (p->next) {
            Node* temp = p->next;
            p->next = p->next->next;
            p = temp;
        }
        
        return newHead;
    }
};