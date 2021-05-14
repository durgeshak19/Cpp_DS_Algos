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

int circularListLength(ListNode *head)
{

    ListNode* curr = head;
    int count = 1;

    if(!head)
        return 0;
    
    do{
        curr = curr->next;
        count++;
    }while(curr != head);
    return count;
}

void printCircularList(ListNode *head)
{
    ListNode* curr = head;
    if(!head)
        return ;
    do{
        std::cout<<curr->val<<" ";
        curr = curr->next;
    }while(curr != head);
    std::cout<<"\n";
}


void insertAtEndCirculatList(ListNode** head , int val)
{
    ListNode* node = new ListNode(val);   
    ListNode* curr = *head; 

    while(curr->next != *head)
        curr->next;
    
    if(*head == NULL)
        *head = node;
    else{
        node->next = *head;
        curr->next = node;
    }
}


void insertAtEndCirculatList(ListNode** head , int val)
{
    ListNode* node = new ListNode(val);   
    ListNode* curr = *head; 

    while(curr->next != *head)
        curr->next;
    
    node->next = node;
    if(*head == NULL)
        *head = node;
    else{
        node->next = *head;
        *head = node;
        curr->next = node;
    }
}

void deleteAtEndCircularList(ListNode** head)
{
    ListNode* curr = *head;
    ListNode* prev = *head;

    if(*head == NULL)
        return ;
    while(curr->next != (*head))
    {
        prev = curr;
        curr= curr->next;
    }
    prev->next = curr->next;
    free(curr);
}

void deleteAtFirstCircularList(ListNode** head)
{
    ListNode* curr = *head;
    ListNode* temp = *head;

    if(*head == NULL)
        return ;
    while(curr->next != (*head))
        curr= curr->next;
    *head = (*head)->next;
    curr->next = *head;
    free(temp);
}
