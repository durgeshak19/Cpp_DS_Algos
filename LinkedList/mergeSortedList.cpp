#include<bits/stdc++.h>
class ListNode
{
    public:
    int val;
    ListNode *next;
};

ListNode* mergeSortedList(ListNode *a , ListNode *b)
{
    ListNode *head = NULL;

    if(!a) return b;
    if(!b) return a;
    if(a->val < b->val)
    {
        head = a ;
        head->next = mergeSortedList(a->next ,b);
    }
    else{
        head = b;
        head->next = mergeSortedList(b->next ,a);
    }
    return head;
}

ListNode* mergeIter(ListNode* a, ListNode* b)
{
    ListNode *head = NULL;
    ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->next = NULL;
    head = newNode;

    while(a && b)
    {
        if(a->val < b->val)
        {
            head->next = a;
            head = head->next;
            a = a->next;
        }
        else{
            head->next = b;
            head = head->next;
            b = b->next;
        }
    } 
    if(a)
        head->next = a;
    else if(b)
        head->next = b;
    
    head = newNode->next;
    free(newNode);
    return head;
}