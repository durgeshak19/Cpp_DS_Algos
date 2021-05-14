#include<iostream>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode *next , *prev;
};

void pushBackDEQ(ListNode **head , int val)
{
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    node->val = val;
    
    if(*head == NULL)
    {
        *head = node;
        (*head)->next = *head;
        (*head)->prev = *head;
    }
    else{
        node->prev = (*head)->prev;
        node->next = *head;
        (*head)->prev->next = node;
        (*head)->prev = node;
    }

}

void pushFrontDEQ(ListNode **head , int val)
{
    pushBackDEQ(head , val);
    *head = (*head)->prev;   
}

int popBackDeq(ListNode **head)
{
    int val = -1;
    if((*head)->prev == *head)
    {
        val = (*head)->val;
        free(*head);
        *head = NULL;
    } 
    else{
        ListNode *temp = (*head)->prev->prev;
        val = ((*head)->prev->val);
        temp->next = *head;
        free((*head)->prev);
        (*head)->prev = temp;
    }
    return val;
}

int popFront(ListNode **head)
{
    *head = (*head)->next;
    return popBackDeq(head);
}

