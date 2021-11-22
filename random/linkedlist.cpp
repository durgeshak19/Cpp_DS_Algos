#include<bits/stdc++.h>
using namespace std;


class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int x){
        val = x;
    }
};

bool traverse(ListNode *head , int x){
    ListNode *temp = head;

    while(temp!=NULL){
        if(temp->val == x){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool traverse_recursively(ListNode *head , int x){
    if(head == NULL )
        return false;
    if(head->val == x){
        return true;
    }
    else
        return traverse_recursively(head->next , x);
    return false;
}

void insertNode(ListNode **head , int x , int pos){
    // beginning middle end
    ListNode *newNode = new ListNode(x);
    ListNode *p = *head;
    ListNode *q;

    if(pos == 1){
        newNode->next = p;
        *head = newNode;
    }
    else{
        int i = 1; 
        while(p != NULL && i < pos){
            i++;
            q = p ;
            p = p->next;
        }

        q->next = newNode;
        newNode->next = p;
    }
}

void deleteNode(ListNode **head , int pos){
    ListNode *p = *head ; 
    ListNode *q;

    if(*head == NULL){
        return;
    }

    if(pos == 1){
        (*head) = (*head)->next;
        free(p) ;
        return;
    }

    else{
        int i = 1;
        while(p != NULL && i <pos){
            i++;
            q = p;
            p = p->next;
        }
        if(p == NULL){
            return;
        }
        else{
            q->next = p->next;
            free(p);
        }
    }   
}