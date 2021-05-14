#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    char value;
    Node *next;

    Node(char value)
    {
        this->value = value;
        next = NULL;
    }
};

void push(Node **head , char value)
{
    Node *newNode = new Node(value);
    newNode->next = *head;
    *head = newNode;
}

void weavingLL(Node **head)
{
    Node *p1 = *head;
    Node *p2 = *head;
    Node *prev = NULL;
    while(p1->next->next != NULL)
    {
        prev = p2;
        p1 = p1->next->next ;
        p2 = p2->next;
    }
    p1 = *head;
    while(p2){
    auto p1_next = p1->next; 
    auto p2_next = p2->next; 
    p1->next = p2; 
    p2->next = p1_next;
    p1 = p1_next; 
    p2 = p2_next;
    }
/* 
    Node *p1_temp = p1->next;
    while(p2)
    {
        prev->next = p1->next;
        p1_temp = p1->next;
        p1->next = p2;
        p2->next = p1_temp;
        p2 = prev->next; 

    }
*/
}

int main()
{
    Node *root = NULL;
    push(&root , 5);
    push(&root , 4);
    push(&root , 3);
    push(&root , 2);
    push(&root , 1);
    push(&root , 0);
    push(&root , -1);
    push(&root , -2);
    push(&root , -3);
    push(&root , -4);
    Node *temp = root;
    while(temp)
    {
        cout<<temp->value<<" -> ";
    }
    weavingLL(&root);

    temp = root;
    while(temp)
    {
        cout<<temp->value<<" -> ";
    }

}