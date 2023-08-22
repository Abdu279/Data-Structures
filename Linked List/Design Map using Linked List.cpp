class MyHashMap {
public:
  struct node{
      int key;
      int val;
      node*next;
  };
   node*head;
    MyHashMap() {
       head=new node;
       head=NULL; 
    }
    
    void put(int key, int value) {
        node*q=new node;
        if(!head){
            q->key=key;
            q->val=value;
            q->next=NULL;
            head=q;
            return;
        }
        q=head;
        while(q->next){
            if(q->key==key){
                q->val=value;
                return;
            }
            q=q->next;
        }
        if(q->key==key){
            q->val=value;
            return;
        }
        node *p=new node;
        p->val=value;
        p->key=key;
        p->next=NULL;
        //q=head;
        q->next=p;
    }
    
    int get(int key) {
        if(!head){
            return -1;
        }

        node*q=new node;
        q=head;
        while(q){
            if(q->key==key){
                return q->val;
            }
            q=q->next;
        }
        return -1;
    }
    
    void remove(int key) {
      node*q=new node;
      node*p=new node;
        q=head;
        p=q;
      /*  if(!head)return;
        if(q->key==key){
            head=q->next;
            delete p;
            delete q;
            return;
        }*/
       while(q){
           if(q->key==key){
               {
                   if(q==head){
                       head=q->next;
                       q->next=NULL;
                       delete q;
                       return;
                   }
               }
              p->next=q->next;
              q->next=NULL;
              delete q;
               return;
           }
         p=q;
         q=q->next;
       }
      
    }
};
