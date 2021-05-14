#include<iostream>

class ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val ;
        next = NULL;
    }
};

void reverseLL(ListNode **head)
{
    ListNode *curr = *head, *prev = NULL , *next;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr ; 
        curr = next;
    }
    *head = prev ;
}


ListNode* reverseListRecursive(ListNode* head)
{
    if(head == NULL || head->next == NULL)
        return NULL;
    
    ListNode *p = head->next;
    head->next = NULL;
    ListNode *temp = reverseListRecursive(p);
    p->next = head;
    return temp;
}


ListNode *mergeSOrtedList(ListNode *head1 , ListNode *head2)
{
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    ListNode *temp;
    node->next = NULL;
    temp = node;

    while( head1 && head2)
    {
        if(head1->val >= head2->val)
        {
            temp->next = head1;
            head1 = head1->next;
            temp = temp->next;
        }
        else if(head2->val > head1->val)
        {
            temp->next = head2 ;
            head2 = head2->next;
            temp = temp->next;
        }
    }

    if(head1)
        temp->next = head1;
    else if(head2)   
        temp->next = head2;
    
    temp = node->next;
    free(node);
    return temp;

}


ListNode* reverseInPairs(ListNode *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    
    ListNode *temp;
    temp = head->next;
    head->next = head->next->next;
    temp->next = head;
    head = temp;
    head->next->next = reverseInPairs(head->next->next);
    return head;
}


void splitCircularList(ListNode *head , ListNode **head1 ,ListNode **head2)
{

    ListNode *slow = head;
    ListNode *fast = head;
    if(head == NULL)
        return;
    while(fast->next!=head && fast->next->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if(fast->next->next = head)
        fast= fast->next;
    *head1 = head ;

    if(head->next != head)
        *head2 = slow->next;
    
    fast->next = slow->next;
    slow->next = head;
}


ListNode *josephusCircle( int n , int m)
{
    ListNode *p , *q;
    p = q =(ListNode*) malloc(sizeof(ListNode));

    p->val = 1;
    for(int i =2;i<=n;i++)
    {
        p->next = (ListNode*) malloc(sizeof(ListNode));
        p = p->next;
        p->val = i;
    }
    p->next = q;
    ListNode* temp =NULL;
    for(int i = n ; i>1;--i)
    {
        for(int j = 1; j<=m;j++)
            p = p->next;
        
        temp = p->next;
        p->next = p->next->next;
        free(temp);
    }
    return p;
}