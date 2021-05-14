#include<bits/stdc++.h>
using namespace std;


class Node 
{
    public:
    int value;

    
    
        Node *next;
    Node(int x) : value(x) ,next(NULL){}

    void printValue(Node*);
    Node* getNext(Node*);
};

void Node::printValue(Node* node)
{
    cout<<node->value<<"->";
}

Node* Node::getNext(Node* node)
{
    return node->next;
}

void printLL(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->value <<"->";
        temp=temp->next;
    }
    cout<<"\n";
    return;
}

void push(Node **head , int value)
{
    Node *newNode = new Node(value);
    newNode->next = (*head);
    (*head) = newNode;
}

void printReverseLL(Node *head)
{
    if(head == NULL)
        return ;

    printReverseLL(head->getNext(head));
    head->printValue(head);

}

void printReverseLLIterative(Node *root)
{
    stack<Node*> st;
    Node *temp = root;
    while(temp != NULL)
    {
        st.push(temp);
        temp=temp->next;
    }
    cout<<endl;
    while(!st.empty())
    {
        cout<<st.top()->value<<"->";
        st.pop();
    }

    return;

    
}

int main()
{
    Node *root = NULL;
    push(&root , 1);
    push(&root , 2);
    push(&root , 3);
    push(&root , 4);
    push(&root , 5);
    printLL(root);
    cout<<endl;
    printReverseLL(root);
    printReverseLLIterative(root);
}