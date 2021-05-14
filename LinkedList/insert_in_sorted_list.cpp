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

ListNode* insertInSorted(ListNode* head , ListNode *node)
{
    ListNode* curr = head ; 
    ListNode* prev ;
    if(!head)
        return node;
    while(curr && curr->val < node->val)
    {
        prev = curr;
        curr = curr->next;
    }
    node->next = curr;
    prev->next = node;
    
    return node;

}