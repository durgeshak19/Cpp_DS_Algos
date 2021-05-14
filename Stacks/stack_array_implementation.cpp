#include<iostream>
#define MAX_SIZE 10

class ArrayStack
{

    public :
    int top;
    int capacity ;
    int *array;
};

ArrayStack* createStack()
{
    ArrayStack* S = new ArrayStack();

    if(!S)
        return NULL;
    
    S->capacity = MAX_SIZE;
    S->top = -1;
    S->array = new int(S->capacity);
    if(!S)
        return NULL;
    return S;
}

bool isEmptyStack(ArrayStack* S)
{
    return (S->top == -1);
}

bool isFullStack(ArrayStack* S)
{
    return (S->top == S->capacity-1);
}

void Push(ArrayStack* S ,int val)
{
    if(isFullStack(S))
    {
        std::cout<<"Stack OverFlow\n";
        return;
    }
    S->array[++S->top] = val;
}

int pop(ArrayStack* S)
{
    if(isEmptyStack(S))
    {
        std::cout<<"Stack Empty";
        return INT_FAST8_MIN;
    }
    return (S->array[S->top--]);
}

void deleteStack(ArrayStack *S)
{
    if(S){
        if(S->array)
            free(S->array);
    free(S);
    }
}

