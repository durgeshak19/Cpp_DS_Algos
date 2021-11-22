#include<bits/stdc++.h>
using namespace std;
class ArrayQueue
{
    public:
    int front,rear;
    int capacity;
    int *array;
};

ArrayQueue* createQueue(int size)
{
    ArrayQueue* Q = new ArrayQueue();

    if(!Q)
        return NULL;
    Q->capacity = size ;
    Q->front = Q->rear = -1;
    Q->array = (int*)malloc(Q->capacity * sizeof(int));
    if(!Q->array)   
        return NULL;
    return Q;
}

bool isEmptyQueue(ArrayQueue* Q)
{
    return Q->front == -1; 
}

bool isFullQueue(ArrayQueue *Q)
{
    return (Q->rear+1)%Q->capacity == Q->front;
}

int queueSize(ArrayQueue* Q)
{
    return (Q->capacity - Q->front + Q->rear +1)%Q->capacity;
}

void Enqueue(ArrayQueue *Q,int val)
{
    if(isFullQueue(Q))
        std::cout<<"Queue Overflow\n";
    else{
        Q->rear = (Q->rear+1)%Q->capacity;
        Q->array[Q->rear] = val ;
        if(Q->front == -1)
            Q->front = Q->rear;
    }
}

int Dequeue(ArrayQueue* Q)
{
    if(isEmptyQueue(Q))
    {
        std::cout<<"Queue Empty\n";
        return INT_FAST8_MIN;
    }
    int data = Q->array[Q->front];
    if(Q->front == Q->rear)
        Q->front = Q->rear = -1;
    else    Q->front = (Q->front +1)%Q->capacity;
    return data;
}

void deleteQueue(ArrayQueue* Q)
{
    if(Q)
    {
        if(Q->array)
            free(Q->array);
        free(Q);
    }
}


