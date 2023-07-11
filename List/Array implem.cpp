#include<iostream>

using namespace std;
const int maxSize= 100;
template<class T>


class List
{
 T enter[maxSize];
 int size;

 public:

 void initialize_list(List *pl)
 {
  pl->size=0;
 } //O(1)

 bool is_Empty(List *pl)
 {
  return !pl->size;
 } //O(1)

 bool is_Full(List *pl)
 {
  return (pl->size==maxSize);
 } //O(1)

 int list_Size(List*pl)
 {
  return pl->size;
 } //O(1)

 void destroy_list(List*pl)
 {
  pl->size=0;
 } //O(1)


  //pre conditions ( 0 <= pos <= size )
 void Linsert(int pos,T e,List *pl)
 {
  for(int i = pl->size ; i > pos ; i-- )
  {
    pl->enter[i] = pl->enter[i-1];
  }
  pl->enter[pos] = e ;
  pl->size++;
 }
   //O(N)


  //pre condition ( 0 <= pos <= size-1 ) && List not empty
  T Ldelete(int pos , List *pl )
 {
    T e = pl->enter[pos];
    for(int i = pos ; i < pl->size -1 ; i++)
    {
      pl->enter[i]=pl->enter[i+1];
    }
    pl->size--;
    return e;
 }
   //O(N)


  //pre condition ( 0 <= pos <= size-1 )
  T retrieve(int pos, List *pl)
  {
    return pl->enter[pos];
  }
   //O(1)


  //pre condition ( 0 <= pos <= size-1 )
  void replace(int pos,T e, List *pl)
  {
    pl->enter[pos]=e;
  }
   //O(1)

  void traverse(List *pl, void(*pv)(T))
  {
    for(int i=0;i<pl->size;i++)
    {
      (*pv)(pl->enter[i]);
    }
  }
   //O(N)


};
