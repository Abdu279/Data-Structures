#include<iostream>

using namespace std;
const int maxSize= 100;
template<class T>


class Stack
{
 int top;
 T items [maxSize];
public:


  /*
  Pre: The stack has been created.
  Pos: Stack becoems empty
  */
void initialize_Stack(Stack *ps)
{
  ps->top=0;
}


/*
Pre: The stack exists and it's not full.
Pos: The item has been added at the top of the stack. 
*/
void push (Stack *ps, T e)
{
  ps->items[ps->top++]=e;
}

/*
Pre: The stack exists and it's not empty.
Pos: The item at the top of the stack has been removed and returned in *pe.
*/
T pop (Stack *ps)
{
    return ps->items[--ps->top];
}

/*
 Pre: The stack exists and it has been initialized.
 Pos: Return true if the stack is empty; false, otherwise.
*/
bool Is_Empty(Stack *ps)
{
    return ! ps->top;
}

/*
 Pre: The stack exists and it has been initialized.
 Pos: Return true if the stack is full; false, otherwise.
*/
bool Is_Full(Stack *ps)
{
    return ps->top==maxSize;
}


/*
Pre: The stack has been created and is not empty.
Post: return the element in the top of stack without changing in it.
*/
T stack_Top (Stack *ps )
{
    return ps->items[ps->top -1];
}

/*
Pre:  The stack has been created.
Post: return the number of elements in stack.
*/
int stack_Size(Stack *ps)
{
    return ps->top;
}


/*
Pre:  The stack has been created.
Post: Stack becoems empty
*/
void clear (Stack *ps)
{
    ps->top=0;
}

};
