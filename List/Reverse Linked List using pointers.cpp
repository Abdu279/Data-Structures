
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*q=NULL;
        while(head){
           ListNode*next=head->next;
           head->next=q;
           q=head;
           head=next;
        }
        return q;
    }
};
