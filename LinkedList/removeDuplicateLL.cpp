#include<bits/stdc++.h>
using namespace std;

class Node{

public :
int value;
Node *next;
};
void deleteDups(Node *head)
{
    map<int,int> m;
    Node *curr = head;
    Node *prev = head;
    while(curr!=NULL)
    {   
        
        if(m[curr->value] > 1)
        {
            prev->next = curr->next;
            delete curr;
            curr = curr->next;
            
        }
        else 
    
        m[curr->value]++;
    }
}