class Solution {
public:
    int getDecimalValue(ListNode* head) {
         string s;
        while (head)
        {
          s+=to_string(head->val);
          head=head->next;  
        }
        int x=0,cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            cnt+=((s[i]-'0')*pow(2,x));
            x++;
        }
        return cnt;
    }
};
