#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int *arr ; // parent >  child p  > 2p+1 && 2p
    int count ;
    int capacity;
    int heap_type;
};


Heap * createheap(int capacity , int heap_type){

    Heap * h = new Heap();
    h->count = 0;
    h->capacity = capacity;
    h->heap_type = heap_type;

    h->arr = (int*)malloc(h->capacity * sizeof(int));
    if(h->arr)
        return NULL;
    return h;
}


int Parent(Heap *h , int i){
    if(i<=0 || i>=h->count)
        return -1;
    return (i-1)/2;
}

int leftChild(Heap *h , int i){
    int left = 2*i + 1;
    if(left > h->count)
        return -1;
    return left;
}



int rightChild(Heap * h,int i){
    int right = 2*i+2;

    if(right >h->count){
        return -1;
    }

    return right;
}

int getMax(Heap *h){
    if(h->count == 0){
        return -1;
    }
    return h->arr[0];
}


void percolateDown(Heap * h , int i){
    int  l , r , max , temp ;

}
int main(){


}