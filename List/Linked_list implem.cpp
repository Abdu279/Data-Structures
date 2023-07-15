#include<iostream>

using namespace std;
const int maxSize= 100;
template<class T>


class List
{
 int size;
 struct node{
  node*next;
  T enter;
 };
 node *head;

 public:

 void initialize_list(List *pl)
 {
  pl->head=NULL;
  pl->size=0;
 } //O(1)

 bool is_Empty(List *pl)
 {
  return !pl->size;
  //return pl->head==NULL;
 } //O(1)

 bool is_Full(List *pl)
 {
  return 0;
 } //O(1)

 int list_Size(List*pl)
 {
  return pl->size;
 } //O(1)

 void destroy_list(List*pl)
 {
   node *q;
   while (pl->head)
   {
    q=pl->head->next;
    delete pl->head;
    pl->head = q;
   }
   pl->size=0;

 } //O(n)


  //pre conditions ( 0 <= pos <= size )
 void Linsert(int pos,T e,List *pl)
 {
   int i;
   node *q;
   node *p=new node();
   p->enter=e;
   if(pos==0)
   {
    p->next=pl->head;
    pl->head = p;
   }
   else
   {
    for(q=pl->head,i=0;i<pos-1;i++)
    {
      q=q->next;
    }
    p->next=q->next;
    q->next=p;
    pl->size++;
   }

 }
   //O(N)


  //pre condition ( 0 <= pos <= size-1 ) && List not empty
  T Ldelete(int pos , List *pl )
 {
     T e ;
     int i;
     node *temp,*q;
    if(pos==0)
    {
      e=pl->head->enter;
      temp=pl->head->next;
      delete(pl->head);
      pl->head=temp;
    }
    else
    {
      for(i=0,q=pl->head;i<pos-1;i++)
      {
        q=q->next;
      }
      e=q->next->enter;
      temp=q->next->next;
      delete(q->next);
      q->next=temp;
    }
    pl->size--;
    return e;
 }
   //O(N)


  //pre condition ( 0 <= pos <= size-1 )
  T retrieve(int pos, List *pl)
  {
    int i;
    node *q;
    for(i=0,q=pl->head;i<pos;i++)
    {
      q=q->next;
    }
    T e =q->enter;
    return e;
  }
   //O(N)


  //pre condition ( 0 <= pos <= size-1 )
  void replace(int pos,T e, List *pl)
  {
   int i;
   node *q;
    for(i=0,q=pl->head;i<pos;i++)
    {
      q=q->next;
    }
    q->next=e;
  }
   //O(N)

  void traverse(List *pl, void(*pv)(T))
  {
    node *p=pl->head;
    while (p)
    {
      (*pv)(p->enter);
      p=p->next;
    }

  }
   //O(N)


};
