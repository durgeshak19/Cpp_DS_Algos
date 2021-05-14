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

bool checkPalindrome(Node **head)
{
    stack<Node*> st;
    Node *fast = *head;
    Node *slow = *head;

    if(slow || (slow->next = NULL))
        return true;

    while(fast->next != NULL && fast->next->next != NULL)
    {
        st.push(slow);
        fast = fast->next->next;
        slow = slow->next;
    }
    slow = slow->next;

    while(slow!=NULL)
    {
        if(st.top()->value != slow->value)
            return false;
        
        st.pop();
        slow = slow->next;
    }
    
    return true;
}
int main()
{
    Node *head = NULL;
    push(&head , 'r');
    push(&head , 'a');
    push(&head , 'd');
    push(&head , 'a');
    push(&head , 'r');

    checkPalindrome(&head) ? cout<<"Plaindrome exist" : cout<<"Palindrome doesn't exist";

}