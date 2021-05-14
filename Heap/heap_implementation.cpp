#include<bits/stdc++.h>
/*
class Heap
{
    public:
    int *array ;
    int count ;
    int capacity ;
    int heap_type;
};

Heap* createHeap(int capacity , int heap_type)
{
    Heap *h = new Heap();
    if(!h)
        return;
    
    h->heap_type = heap_type ;
    h->count = 0;
    h->capacity = capacity ;
    h->array = (int*)malloc(capacity * sizeof(int));
    if(!h->array)
        return;
    return h;
}

int parent(Heap *h,int i)
{
    if(i<=0 || i>=h->count)
        return -1;
    return (i-1)/2;
}

int leftChild(Heap* h ,int i)
{
    int left = 2*i +1;
    if(left >= h->count)
        return -1;
    return left;
}

int rightChild(Heap* h ,int i)
{
    int right = 2*i + 2;
    if(right >= h->count)
        return -1;
    return right;
}

int getMaximum(Heap *h)
{
    if(h->count == 0)
        return -1;
    return h->array[0];
}

void percolateDown(Heap *h , int i)
{
    int l , r, max ,temp;
    l = leftChild(h ,i );
    r = rightChild(h , i);
    if(l != -1 && h->array[l] > h->array[i])
        max = l;
    else
        max = i;
    if(r != -1 && h->array[r] > h->array[max])
        max = r;
    if(max != i){
        temp = h->array[i];
        h->array[i] = h->array[max];
        h->array[max] = temp;
    }
    percolateDown(h , max);
}

int deleteMax(Heap *h)
{
    int data ; 
    if(h->count == 0)
        return -1;
    data = h->array[0];
    h->array[0] = h->array[h->count-1];
    h->count--; 
    percolateDown(h, 0);
    return data;
}

void insert(Heap *h , int data)
{
    int i ;
    if(h->count == h->capacity)
        resizeHeap(h);
    
    h->count++;
    i = h->count - 1;
    while(i>=0 && data > h->array[(i-1) / 2]){
        h->array[i] = h->array[(i-1)/2];
        i = (i-1)/2;

    }
    h->array[i] = data;
}

void resizeHeap(Heap *h)
{
    int *array_old = h->array;
    h->array = (int*)malloc(h->capacity * 2 * sizeof(int));
    if(!h->array)
        return;
    
    for(int i=1;i<h->capacity ; i++)
        h->array[i] = array_old[i];
    h->capacity *= 2;
    free(array_old);
}

void buildHeap(Heap *h ,int *arr , int n)
{
    if(h == NULL)
        return ;
    
    while(n>h->capacity)
        resizeHeap(h);
    
    for(int i=0;i<n;i++)
        h->array[i] = arr[i];
    
    h->count = n;
    for(int i = (n-1)/2 ;i>=0;i--) 
        percolateDown(h,i);
}

void heapSort(int *arr ,int n)
{
    Heap* h = createHeap(n,1);

    int old_size , i ,temp;
    buildHeap(h,arr,n);
    old_size = h->count;
    for(int i = n-1;i>0;i--){
        temp = h->array[0];
        h->array[0] = h->array[h->count];
        h->array[0] = temp ;
        h->count--;
        percolateDown(h,0);
    }
    h->count = old_size;
}


*/

//Binary Heap Array Implementation
//array representation 17->13-6->1->4->2->5 
//        17
//      /    \
//     13     6
//    / \    / \
//    1  4   2  5

class Heap
{
    public:
    int count; // no of ele currently in heap
    int capacity;//size of heap
    int *array ; //to store ele
    int heap_type;
};

Heap *createHeap(int capacity , int heap_type)
{
    Heap *h = (Heap*)malloc(sizeof(Heap));
    if(h == NULL)
        return ;
    h->heap_type = heap_type;
    h->capacity = capacity;
    h->count = 0;
    h->array = (int*)malloc(sizeof(int)* capacity);
    if(h->array == NULL)
        return;
    return h;
}

int Parent(Heap *h,int i)
{
    if(i<=0 || i>=h->count)
        return -1;
    int parent = (i-1)/2;
    // return h->array[parent];
    return parent;
}

int leftChild(Heap *h,int i)
{
    int left = 2*i + 1;
    if(left >= h->count)
        return -1;
    // return h->array[left];
    return left;
}

int rightChild(Heap *h,int i)
{
    int right = 2*i + 2;
    if(right >= h->count)
        return -1;
    // return h->array[right];
    return right;
}

int getMaximum(Heap *h)
{
    if(h->count == 0)
        return -1;
    return h->array[0];
}

//heapify the element at location i after insertion
//max heapify - find maximum of its children and swap
//heap is a complete binary tree so in worst case O(log n)
void percolateDown(Heap *h, int i)
{
    int l ,r , max , temp;
    l = leftChild(h,i);
    r = rightChild(h,i);

    if(l!=-1 && h->array[l] > h->array[i])
        max = l;
    else
        max = i;
    
    if(r!=-1 && h->array[r] > h->array[max])
        max = r;

    if(max!=i)
    {
        temp = h->array[max];
        h->array[max] = h->array[i];
        h->array[i] = temp;
        percolateDown(h,max);
    }    
}

//deleting element in  a heap is always done at root
//so copy the last element at root position and heapify

int deleteMax(Heap *h)
{
    int val;
    if(h->count = 0)
        return -1;
    
    val = h->array[0];
    h->array[0] = h->array[h->count-1];
    h->count--;
    percolateDown(h,0);
    return val;
}

void resizeHeap(Heap *h)
{
    int *array = h->array;
    h->array = (int*)malloc(sizeof(int) * h->capacity * 2);
    if(h->array == NULL)
        return;
    for(int i =0 ;i<h->capacity;i++)
        h->array[i] = array[i];
    h->capacity *= 2;
    free(array); 
}
//since element is inserted at end it might not
//satisfy heap property so we need to percolate up from that position

int insert(Heap *h , int val)
{
    int i;
    if(h->count == h->capacity)
        resizeHeap(h);
    
    h->count++;
    i = h->count - 1;

    while(i>=0 && val > h->array[(i-1)/2])
    {
        h->array[i] = h->array[(i-1)/2];
        i = (i-1)/2;
    }
    h->array[i] = val;
    //is there no need to percolate down from this position
}

void destroyHeap(Heap *h)
{
    if(h== NULL)
        return;
    
    free(h->array);
    free(h);
    h = NULL;
}

//heapifying the array by taking individual element and 
//inseting will take O(n * log n) log n for each insertion for n element
//but can be done in O(n) time if we take whole array 
//leaf nodes always satisfy heap property 

void buildHeap(Heap *h , int *arr, int n)
{
    if(h = NULL)
        return;
    while(n>h->capacity)
        resizeHeap(h);
    for(int i= 0 ;i<n;i++)
        h->array[i] = arr[i];
    h->count = n;
    for(int i = (h->count - 1)/2 ;i>=0;i--)
        percolateDown(h,i);
}

//heapsort is taking al unsortedd array ele inserting into
//heap and remove root of heap until heap is empty;
//inplace can be done by 
//1.swapping root with the last element.
//2.Percolating Down from root position every time.
//3.Reduce the Heap Size

void heapSort(int *arr , int n)
{
    Heap *h = createHeap(n,1); // 1  for max heap
    int old_size , i ,temp;
    buildHeap(h,arr,n);
    old_size = h->count;
    for(int i = n-1;i>=0;i--){
        temp = h->array[0];
        arr[i] = temp; // sorted value stored back
        h->array[0] = h->array[h->count-1];
        h->array[0] = temp;
        h->count--;
        percolateDown(h,0);
    }
    h->count = old_size ;
}