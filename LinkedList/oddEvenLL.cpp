#include<bits/stdc++.h>
class ListNode
{
    public:
    int val;
    ListNode *next;
};

bool isEven(ListNode *head)
{
    while(head && head->next)
        head = head->next->next;

    if(!head)
        return false;

    return true;

}