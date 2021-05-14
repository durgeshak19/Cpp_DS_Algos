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

void doubleLLinsert(ListNode** head ,int val,int position)
{
    ListNode *curr = *head ;
    ListNode *node = new ListNode(val);
    

    //insert at 1st position
    if(position == 1)
    {
        node->next = *head;
        if(*head)
            (*head)->prev = node;
        *head = node;
    }

    //insert at the end
    else if(position == -1)
    {
        
        while(curr->next)
            curr = curr->next;

        /*ambiguity
            if(curr->next)
                curr->next->prev = node
        */
        curr->next = node;
        node->prev = curr;

    }
    else{

        int i = 1;
        while(i<position && curr->next)
        {
            curr = curr->next;
            i++;
        }
        if(i!=position)
            return ;
        
        node->next = curr->next;
        node->prev = curr;

        if(curr->next)
            curr->next->prev = node;
        
        curr->next->prev = node;
    }
}
