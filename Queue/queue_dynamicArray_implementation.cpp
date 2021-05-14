#include<iostream>

class DynArrQueue
{
    public:
    int front;
    int rear;
    int capacity;
    int *array;
};

DynArrQueue* createQueue()
{
    DynArrQueue* Q = new DynArrQueue();
    if(!Q)
        return NULL;
    Q->front = Q->rear = -1;
    Q->capacity = 1;
    Q->array = (int*)malloc(Q->capacity * sizeof(int));

    if(!Q->array)   
        return NULL;
    return Q;
}

bool isEmptyQueue(DynArrQueue* Q)
{
    return Q->front == -1;
}

bool isFullQueue(DynArrQueue* Q)
{
    return (Q->rear+1) % Q->capacity == Q->front;
}

int queueSize(DynArrQueue* Q)
{
    return (Q->capacity - Q->front + Q->rear + 1)%Q->capacity;
}

void resizeQueue(DynArrQueue* Q)
{
   int size = Q->capacity;
   Q->capacity = Q->capacity * 2;
   Q->array =(int*)realloc(Q->array , Q->capacity);
   if(!Q->array)
   {
       std::cout<<"Memory Error\n";
       return;
   }

   if(Q->front > Q->rear)
   {
       for(int i=0;i<Q->front ;i++)
            Q->array[i+size] = Q->array[i];
        Q->rear = Q->rear + size;
   }
}


void Enqueue(DynArrQueue* Q , int val)
{
    if(isFullQueue(Q)){
        resizeQueue(Q);
    }

    Q->rear = (Q->rear +1)%Q->capacity;
    Q->array[Q->rear] = val;
    if(Q->front == -1)
        Q->front = Q->rear;
}

int Dequeue(DynArrQueue* Q )
{
    if(!isEmptyQueue(Q))
    {
        std::cout<<"Queue is Empty\n";
    }

    else{
        int data = Q->array[Q->front];
        if(Q->front == Q->rear)
            Q->front = Q->rear = -1;
        else
            Q->front = (Q->front + 1)%Q->capacity;
        return data;
    }
    
    return INT8_MIN;
}

