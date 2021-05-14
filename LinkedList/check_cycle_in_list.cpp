#include<bits/stdc++.h>

class ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
    
};

bool containsLoop(ListNode* head)
{
    ListNode* fast = head;
    ListNode* slow = head;

    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast = slow)
            return false;
    }
    return true;
}