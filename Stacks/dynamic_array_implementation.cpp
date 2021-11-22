#include<iostream>

class DynArrayStack
{
    public:
    int top;
    int capacity;
    int *array;
};

DynArrayStack* createStack()
{
    DynArrayStack* S =new DynArrayStack();
    if(!S)
        return NULL;

    S->top = -1;
    S->capacity = 1;
    S->array = new int(S->capacity);
    if(!S->array)
        return NULL;
    return S; 
}

int isFullStack(DynArrayStack* S)
{
    return (S->top == S->capacity-1);
}

void DoubleStack(DynArrayStack *S)
{
    S->capacity *= 2;
    S->array = (int*)realloc(S->array , S->capacity * sizeof(int));
}

void push(DynArrayStack* S,int val)
{
    if(isFullStack(S))
        DoubleStack(S);
    S->array[++S->top] = val;
}

int isEmptyStack(DynArrayStack* S)
{
    return (S->top == -1);
}

int top(DynArrayStack* S)
{
    if(isEmptyStack(S))
        return INT64_MIN;
    return S->array[S->top]; 
}

int pop(DynArrayStack* S)
{
    if(isEmptyStack(S))
        return INT64_MIN;
    return S->array[S->top--];
}

void deleteStack(DynArrayStack *S)
{
    if(S)
    {
        if(S->array)
            free(S->array);
        free(S);
    }
}