#include<bits/stdc++.h>
class ListNode
{
    public:
    int val;
    ListNode *next;
};


ListNode* reversePairRecursive(ListNode *head)
{
    if(head == NULL || head->next == NULL)
        return NULL;
    
    else{
        ListNode* temp ;
        temp = head->next;
        head->next = temp->next;
        temp->next = head;
        head = temp;
        head->next->next = reversePairRecursive(head->next->next); 
    }
    return head;
}

ListNode* reverPairIter(ListNode* head)
{
    if(head == NULL || head->next == NULL)
        return head;

    ListNode* temp1 = NULL ;
    ListNode* temp2 = NULL ;
    ListNode* curr = head ;
    while(curr && curr->next)
    {
        if(temp1)
            temp1->next->next = curr->next;

        temp1 = curr->next;
        curr->next = curr->next->next;
        temp1->next = curr;
        if(temp1 == NULL)
            temp2 = temp1;
        curr = curr->next;
    }
    return temp2;
}