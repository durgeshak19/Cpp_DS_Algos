#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class ListNode 
{
    public:
    int val;
    ListNode* next;
};

void PrintList(ListNode *head)
{
    ListNode *temp = head;
    if(temp)
    {
        do{
            cout<<temp->val<<" ";
            temp = temp->next;
        }while(temp!=head);
    }

}

void insertAtEnd(ListNode **head,int val)
{
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    node->val = val;
    node->next = node;

    // 1->2->3->4->1
    // 1->1
    // doesn't exist head
    if(*head == NULL) 
        *head = node;

    ListNode *temp = *head;
    while(temp->next != *head)
        temp = temp->next;
    
    temp->next = node;
    node->next = *head;
}

void insertAtFront(ListNode **head, int val)
{
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    ListNode* temp = *head;
    node->val = val;
    node->next = node;
    if(*head == NULL)
        *head = node;
    else{
        while(temp->next != *head)
            temp = temp->next;
        
        node->next = *head;
        temp->next = node;
        *head = node;
    } 

}

void deleteFirstNode(ListNode **head)
{
    if(*head == NULL)
        return;
    ListNode *curr = *head ;//, *prev =*head;
    
    while(curr->next != *head)
    {
        curr = curr->next; 

    }

   
}

// find nth node find list length then go to n-kth node

ListNode* findKthNodeFromENd(ListNode* head,int k)
{
    ListNode* temp = head;

    for(int i=1;i<k;i++)
        if(temp)
            temp = temp->next;
    
    ListNode* res = NULL;
    while(temp)
    {
        if(res == NULL)
            res = head;
        else
            res = res->next;
        temp = temp->next;
    }
    if(res)
        return res;
    return NULL;
}


bool findCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while(fast->next = fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(slow = fast)
            return true;
    }
    return false;
}