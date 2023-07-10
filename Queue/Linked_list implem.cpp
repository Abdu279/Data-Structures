#include<iostream>

using namespace std;
const int maxSize= 100;
template<class T>


class Queue
{

 struct node
 {
   T enter;
   node *next;
 };

 node *front;
 node *rear;
 int size;


 public:

 void Initialize_Queue(Queue * pq)
 {
  pq->front=NULL;
  pq->rear=NULL;
  pq->size=0;
 }

 void Append(T item,Queue *pq)
 {
  node *pn = new node;
  pn->enter=item;
  pn->next=NULL;
  if(pq->rear==NULL)
    pq->front=pn;
  else
    pq->rear->next=pn;
  pq->rear=pn;
  pq->size++;

 }

 T Serve(Queue *pq)
{
  node *pn=pq->front;
  pq->front=pn->next;
  T x=pn->enter;
  delete pn;
  if(pq->front==NULL)
    pq->rear=NULL;
  pq->size--;
  return x;
}

bool Is_Empty(Queue *pq)
{
  return !pq->size;
  //return !pq->rear;
  //return !pq->front;
}

bool Is_Full(Queue *pq)
{
  return 0;
}

int QueueSize(Queue *pq)
{
  return pq->size;
}

void clearQueue(Queue *pq)
{
  while (pq->front)
  {
    pq->rear=pq->rear->next;
    delete pq->front;
    pq->front=pq->rear;
  }
  pq->size=0;

}

void TraverseQueue(Queue *pq, void (*pf)(T))
{
  node *pn=pq->front;
  while (pn)
  {
    (*pf)(pn->enter);
    pn=pn->next;
  }

}

};
