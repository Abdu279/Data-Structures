class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* q=head;
        while(q){
            q=q->next;
            n++;
        }
        for(int i=0;i<n/2;i++)
        {
            head=head->next;
        }
        return head;
    }
};


//another solution

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *q=head,*p=head;
        while(q&&q->next){
            q=q->next->next;
            p=p->next;
        }
       return p;
    }
};
