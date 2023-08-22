class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
       head=head->next;
       ListNode *l=head;
       while(l)
       {
           ListNode *r=l;
           int cnt=0;
           while(r->val!=0){
               cnt+=r->val;
               r=r->next;
           }
           l->val=cnt;
           l->next=r->next;
           l=l->next;
       }
       return head;
    }
};
