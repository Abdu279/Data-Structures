class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*dele=node->next;
        node->val=node->next->val;
        node->next=node->next->next;
        delete dele;
        
    }
};
