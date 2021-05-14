#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        next = NULL;
    }
};

void printLL(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->value<<"->";
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

// can also be done for position keep in mind position
//does not exceed Linked List Length 
void del(Node** head_ref, int key) 
{ 
    Node* temp = *head_ref; 
    Node* prev = NULL; 
    
    if (temp != NULL && temp->value == key) 
    { 
        *head_ref = temp->next; 
        delete temp;            
        return; 
    }  
    while (temp != NULL && temp->value != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    if (temp == NULL) 
        return; 
  
    prev->next = temp->next; 
  
    delete temp; 
} 

void delMiddle(Node **head)
{
    Node *fast = *head;
    Node *slow = *head;
    Node *prev = NULL;
    if(slow==NULL || slow->next ==NULL)
    {
        delete slow;
        return;
    }

    while(fast->next != NULL && fast->next->next != NULL)
    {   
        fast= fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = slow->next;
    delete slow;
}

//head needs to be **NULL** not memory freed
void deleteList(Node **head)
{
    Node* temp , *iter ;

    iter = *head;
    while(iter)
    {
        temp = iter->next;
        free(iter);
        iter = temp;
    }
    *head = NULL ; //IMPORTANT

}
int main()
{
    Node *root = NULL;
    push(&root , 1);
    push(&root , 2);
    push(&root , 3);
    push(&root , 4);
    push(&root , 5);
/*  
    printLL(root);
    del(&root,5);//head
    printLL(root);
    
    del(&root,1);//somewhere in the middle
    printLL(root);
    
    del(&root,3);//tail 
 */
    delMiddle(&root);

    delMiddle(&root);
    printLL(root);
    
    return 0;
}