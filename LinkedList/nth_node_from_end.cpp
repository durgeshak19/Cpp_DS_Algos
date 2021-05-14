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


ListNode* NthNodeFromEnd(ListNode* head ,int k)
{
    ListNode* temp = head;
    for(int i = 1;i<k;i++)
    {
        if(temp)
            temp = temp->next;
    }
    ListNode* nthNode = NULL;
    while(temp)
    {
        if(nthNode == NULL)
            nthNode == head;
        
        else
            nthNode = nthNode->next;
        
        temp = temp->next;
    }

    if(nthNode)
        return nthNode;
    return NULL;

}