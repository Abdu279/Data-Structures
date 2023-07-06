#include<iostream>

using namespace std;
template<class T>


class Stack
{
 struct node
 {
   T item;
   node *next;
 };
 node *top;
 int size;
 
public:


void initialize_Stack(Stack *ps)
{
  ps->top=NULL;
  ps->size=0;
}


void push (Stack *ps, T e)
{
 node *pushNode=new node;
 pushNode->item=e;
 pushNode->next=ps->top;
 ps->top=pushNode;
 ps->size ++;
}


T pop (Stack *ps)
{
   T back;
   node *pn=ps->top;
   back=ps->top->item;
   ps->top=ps->top->next;
   delete pn ;
   ps->size --;
   return back;
}


bool Is_Empty(Stack *ps)
{
    return ps->top==NULL;
}


bool Is_Full(Stack *ps)
{
    return false;
}



T stack_Top (Stack *ps )
{
    return ps->top->item;
}


int stack_Size(Stack *ps)
{
    return ps->size;
}


void clear (Stack *ps)
{
    node *pn=ps->top;
    while (pn)
    {
      pn=pn->next;
      delete ps->top;
      ps->top=pn;
    }
    
}

};
