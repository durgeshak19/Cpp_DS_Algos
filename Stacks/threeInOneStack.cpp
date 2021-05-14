#include<bits/stdc++.h>
using namespace std;


class fixedMultiStack
{
    int numberOfStacks = 3;
    int stackCapacity ;
    int *values;
    int *sizes;

public:

    fixedMultiStack(int stackSize)
    {
        stackCapacity = stackSize;
        values = new int(numberOfStacks*stackCapacity);
        sizes = new int(numberOfStacks);
    }

    void push(int val ,int stackNumber)
    {
        if(isFull(stackNumber))
            return ;
        sizes[stackNumber]++;
        values[indexOfTop(stackNumber)] = val;
    }

    void pop(int stackNumber)
    {
        if(isEmpty(stackNumber))
            return ;
        int topIndex = indexOfTop(stackNumber);
        values[topIndex] = 0;
        sizes[stackNumber]--;

        return;
    }

    int top(int stackNumber)
    {
        if(isEmpty(stackNumber))
            return -1;
        return values[indexOfTop(stackNumber)];
    }

    bool isEmpty(int stackNumber)
    {
        return sizes[stackNumber] == 0;
    }

    bool isFull(int stackNumber)
    {
        return sizes[stackNumber] == stackCapacity;
    }

    int indexOfTop(int stackNumber)
    {
        int offset = stackNumber * stackCapacity;
        return sizes[stackNumber] + offset - 1 ; 
    }
};


