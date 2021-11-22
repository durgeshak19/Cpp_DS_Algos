#include<bits/stdc++.h>
using namespace std;


class ArrayQueue{

    public:
    int front ;
    int rear ;
    int capacity;
    int *arr;
};

ArrayQueue* createQueue(int size){

    ArrayQueue * Q = new ArrayQueue();
    Q->front = -1;
    Q->rear = -1;
    Q->capacity = size;
    Q->arr = (int*)malloc(Q->capacity * sizeof(int));
    if(!Q)  return NULL;
    return Q;
}

bool isEmptyQueue(ArrayQueue * Q){
    return Q->front == -1;
}

bool isFullQueue(ArrayQueue * Q){
    return (Q->rear + 1) % Q->capacity == Q->front; 
}

int queueSize(ArrayQueue *Q){
    return (Q->capacity - Q->front + Q->rear + 1) %Q->capacity;
}

void Enqueue(ArrayQueue *Q, int val){
    if(isFullQueue(Q))
        cout<<"Queue full"<<endl;

    else{
        Q->rear = (Q->rear + 1) % Q->capacity;
        Q->arr[Q->rear] = val;
        if(Q->front == -1){
            Q->front = Q->rear;
        }
    }
}

class QueueUsingTwoStacks{


    stack<int> s1;
    stack<int> s2;
    bool Enqueue(int val){
        s1.push(val);
        return true;
    }

    bool Dequeue(int & value){
        int data ;
        if(!s2.empty()){
            value =s2.top();
            s2.pop();
            return true;
        }

        while(!s1.empty()){
            data = s1.top();
            s1.pop();
            s2.push(data);
        }
        if(s2.empty()) return false;

        value = s2.top();
        s2.pop();
        return true;
    }
    bool queuePeek(int & value){
        int data;
        while(!s1.empty()){
            data = s2.top();
            s2.pop();
            s1.push(data);
        }

        if(s2.empty()){
            return false;
        }
        value = s2.top();
        return true;
    }

    bool isQueueEmpty(){
        return s1.empty() && s2.empty() ? true : false;
    }


};
int Dequeue(ArrayQueue *Q, int val){
    if(isEmptyQueue(Q)){
        cout<<"Queue Empty"<<endl;
        return INT_MIN;
    }
    int data = Q->arr[Q->front];
    if(Q->front == Q->rear)
        Q->front = Q->rear = -1 ;
    else Q->front = (Q->front +1)%Q->capacity;
    return data;

}


int checkPairWiseOrder(stack<int> &s){

    queue<int> q;
    int paisrWiseOrder = 1;
    int pairWiseOrder = 1;
    while(!s.empty()) {
        q.push(s.top());
        q.pop();
    }
    while(!q.empty())
    {
        int n=s.top();
        s.pop();

        if(!s.empty()){
            int m = s.top();
            s.pop();
            q.push(m);
            if(abs(n-m) == 1){
                pairWiseOrder = 0;
            }
        }
    }

}
int main(){


}