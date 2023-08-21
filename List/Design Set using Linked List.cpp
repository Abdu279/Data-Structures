class MyHashSet {
public:
   ListNode*Head;
    MyHashSet() {
       Head=NULL;
    }
    
    void add(int key) {
      ListNode*q=Head;  
       while(q){
           if(q->val==key)return;
           q=q->next;
       }
       q=new ListNode(key);
       q->next=Head;
       Head=q;
    }
    
    void remove(int key) {
        if(Head && Head->val==key){
           // ListNode*p=Head;
            Head=Head->next;
             //delete(p);
            return;
        }
        ListNode*q=Head;
        while(q&&q->next){
            if(q->next->val==key){
               //ListNode*p=q; 
               q->next=q->next->next;
              //delete(q);
               return;
            }
            q=q->next;
        }
       
    }
    
    bool contains(int key) {
          ListNode*q=Head;
          while(q){
              if(q->val==key)return true;
              q=q->next;
          }
          return false;
    }
};
