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

bool findBeginOfLoop(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;

    bool loopExists = 0;

    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            loopExists = true;
            break;
        }
    }

    if(loopExists){
        slow = head;
        while(slow != fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
    return NULL;
}


int findLoopLength(ListNode* head)
{

    ListNode *slow = head ;
    ListNode *fast = head ;

    int loopExists = 0;
    int count = 0;

    while(slow && fast && fast->next )
    {
        slow = slow->next;
        fast = fast->next;
        if(slow == fast)
        {
            loopExists = 1;
            break;
        }
    }

    if(loopExists)
    {
        fast = fast->next;
        while(slow != fast)
        {
            fast = fast->next;
            count++;
        }
    }
    return count;
}