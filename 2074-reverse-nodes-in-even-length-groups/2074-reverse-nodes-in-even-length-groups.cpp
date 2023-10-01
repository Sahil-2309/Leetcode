class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(!head || !head->next) return head;
        int n=0;
        ListNode *h=head;
        ListNode* pre;
        ListNode* cur;
        ListNode* fow;
        vector<int> l;
        while(h){
            n++;
            h=h->next;
        }
        for(int i=1;n>0;i++){
            if(n-i>=0){
            n-=i;
            l.push_back(i);
            }
            else{
                l.push_back(n);
                n=0;
            }
        }
        h=head;
        pre=h;
        for(auto v:l){
            if(!(v&1)){
                cur=pre->next,fow=cur->next;
                for(int i=1;i<v;i++){
            if (fow) {
                cur->next=fow->next;
                fow->next=pre->next;
                pre->next=fow;
                fow=cur->next;
            } else {
                break;
            }
            }
            pre=h;
                h=h->next;
            }
            else{
                for(int i=0;i<v;i++){
                    pre=h;
                    h=h->next;
                }
            }
            if(h)
            cout<<"previous "<<pre->val<<" h is on "<<h->val<<endl;
        }
        return head;
    }
};