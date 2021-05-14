#include<bits/stdc++.h>
class ListNode
{
    public:
    int val;
    ListNode *next;
};

ListNode* getKthPlusOnethNode(ListNode* head , int k)
{
    ListNode *kth;
    int i =0;
    if(!head)
        return head;
    for(i =0 , kth = head; kth && i<k ;i++ ,kth = kth->next );
    if(i==k && kth != NULL)
        return kth;
    
    return head->next;
}

int hasKnodes(ListNode *head , int k)
{
    int i=0;
    for(i=0;head && (i<k);i++,head = head->next);
    if(i==k)
        return 1;
    
    return 0;
}

ListNode* reverseBlockOfKnodesInList(ListNode *head, int k)
{
    ListNode *curr = head ;
    ListNode *temp ,*next ,*newHead;

    int i;
    if(k==0 || k== 1)
        return head;

    if(hasKnodes(curr , k-1))
        newHead = getKthPlusOnethNode(head, k);

    else newHead = head;

    while(curr && hasKnodes(curr ,k )){
        temp = getKthPlusOnethNode(curr , k);
        i =0 ;
        while(i<k){
            next = curr->next;
            curr->next = temp;
            temp = curr;
            curr = next;
            i++;
        }
    }
    return newHead;
}