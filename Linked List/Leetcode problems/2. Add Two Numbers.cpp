class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();
        ListNode*temp=ans;
        int c=0;
        while(l1||l2||c){
            int sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=c;
            c=sum/10;
            ListNode*node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        return ans->next;
    }
};