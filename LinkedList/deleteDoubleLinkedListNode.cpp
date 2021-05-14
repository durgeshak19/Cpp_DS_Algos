#include<bits/stdc++.h>

class ListNode
{
    public:
    int val;
    ListNode* next , *prev;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
    
};

void deleteList(ListNode** head)
{
    ListNode *temp ;
    while((*head)->next)
    {
        temp = *head ;
        *head = (*head)->next ;
        free(temp);
    }
}

void deleteNode(ListNode **head , int position)
{

    ListNode* curr = *head;

    //delete at first position
    if(position == 1)
    {
        *head = (*head)->next ;
        if(*head)
            (*head)->prev = NULL;
        free(curr);
    }

    else{
        
        int i = 1;
        while(curr->next != NULL && i<position-1)
        {
            curr = curr->next;
            i++;
        }

        if(i!=position-1)
            return;
        
        ListNode *prev = curr->prev;
        prev->next = curr->next;
        if(curr->next)
            curr->next->prev = prev;
        free(curr);
    }
}