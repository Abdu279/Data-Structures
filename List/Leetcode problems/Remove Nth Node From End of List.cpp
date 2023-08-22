class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*q=head,*p=head,*node;
        n++;
        while(n--){
            if(!q){
                head=head->next;
                delete p;
                return head;
            }
             q=q->next;
        }
        while(q){
           q=q->next; 
           p=p->next;
        }
        
          node=p->next;
         p->next=p->next->next;
         delete node;
            
        return head;
    }
};
