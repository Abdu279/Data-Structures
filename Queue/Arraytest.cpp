
#include<iostream>

using namespace std;
const int maxSize= 100;
template<class T>


class Queue
{
 int front,rear,size;
 T enter[maxSize];

 public:

 void Initialize_Queue(Queue * pq)
 {
  pq->front=0;
  pq->rear=-1;
  pq->size=0;
 }

 void Append(T item,Queue *pq)
 {
  pq->rear=(pq->rear +1)%maxSize;
  pq->enter[pq->rear]=item;
  pq->size++;
 }

 T Serve(Queue *pq)
{
  T item= pq->enter[pq->front];
  pq->front= (pq->front +1)%maxSize;
  pq->size--;
  return item;
}

bool Is_Empty(Queue *pq)
{
  return !pq->size;
}

bool Is_Full(Queue *pq)
{
  return (pq->size==maxSize);
}

int QueueSize(Queue *pq)
{
  return pq->size;
}

void clearQueue(Queue *pq)
{
  pq->front=0;
  pq->rear=-1;
  pq->size=0;
}

void TraverseQueue(Queue *pq, void (*pf)(T))
{
  int pos=pq->front;
  for(int s=0;s<pq->size;s++)
  {
     (*pf)(pq->enter[pos]);
     pos=++pos %maxSize;
  }
}

};
void f(int x)
{
    x++;
    cout<<x<<" ";
}

int main()
{
  Queue<int>q;
  q.Initialize_Queue(&q);
  q.Append(1,&q);
  q.Append(2,&q);
  q.Append(3,&q);
  cout<<q.Is_Empty(&q)<<" ";
  cout<<q.Is_Full(&q)<<" ";
  cout<<q.QueueSize(&q)<<" ";
  q.TraverseQueue(&q,&f);
  cout<<q.Serve(&q)<<" ";
}
