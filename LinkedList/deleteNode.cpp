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


//delete node at defined postion
void deleteNode(ListNode **head,int position)
{
    ListNode *prev , *curr;

    prev = *head;

    if(position == 1)
    {
        (*head) = (*head)->next;
        free(prev);
        return;
    }   
    
    //delete last position
    else if(position == -1){
        curr = *head;

        while(curr)
        {
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = curr->next;
        free(curr);
    }
    //delete at any postition
    else{

        curr = *head;
        int i = 1;
        while(curr && i<position)
        {
            prev = curr;
            curr = curr->next;
        }
        if(curr = NULL)
            return;
        prev->next = curr->next;
        free(curr);
    }
}

void deleteList(ListNode** head)
{
    ListNode *temp = *head;
    while(*head)
    {
        temp = *head;
        (*head) = (*head)->next;
        free(temp);
    }
}