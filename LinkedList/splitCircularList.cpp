#include<bits/stdc++.h>
class ListNode
{
    public:
    int val;
    ListNode *next;
};


void splitList(ListNode *head , ListNode** head1 , ListNode** head2)
{   
    ListNode* slow = head;
    ListNode* fast = head;

    if(!head)
        return ;
    
    while(fast->next != head & fast->next->next != head)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    if(fast->next->next == head)
        fast = fast->next;

    *head1 = head;

    if(head->next!= head)
        *head2= slow;
    fast->next = slow->next;

    slow->next = head;

}