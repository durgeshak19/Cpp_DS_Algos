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

//inserting in a linked list
void insertNode(ListNode **head , int val ,int position)
{
    ListNode* node = new ListNode(val);

    //insert at the beginnning
    if(position == 1)
    {
        node->next = *head;
        *head = node;
    }
    //insert at the end
    else if(position == -1)
    {
        ListNode *temp = *head;
        //inserting at last postion if any elements exist
        if(!temp){
            while(temp->next)
            {
                temp = temp->next;
            }
            temp->next = node;
        }
        //if no elements exist update the head pointer;
        else
        *head = node;
    }
    //insert at any position 
    else{
        ListNode *temp = *head;
        ListNode *prev = NULL;
        int i=1;

        while(temp  && i<position)
        {
            prev = temp;
            temp=temp->next;
            i++;
        }
        prev->next = node;
        node->next = temp;
    }
}