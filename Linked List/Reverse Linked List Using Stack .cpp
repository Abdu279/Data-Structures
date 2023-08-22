class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int>st;
        ListNode *q=head,*p=head;
        while(q)
        {
            st.push(q->val);
            q=q->next;
        }
        while(p)
        {
            p->val=st.top();
            st.pop();
            p=p->next;
        }
        return head;
    }
};
