class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        if(!head) return {};
        
        ListNode *p=head;

        stack<pair<int,int>> st;

        int n=0;
        while(p){
            p=p->next;
            n++;
        }
        p=head;

        vector<int> ans(n,0);
        int k=0,f;
        while(p){
                // int t=k;
                while(!st.empty() && st.top().first<p->val){
                ans[st.top().second]=p->val;
                // t--;
                cout<<p->val<<" popped "<<st.top().first<<endl;
                st.pop();
                f=1;
                }
                
            st.push({p->val,k});
            p=p->next;
            k++;
        }

        return ans;
    }
};