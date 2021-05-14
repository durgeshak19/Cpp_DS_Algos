#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    vector<Node*> children[26];

    Node(){}

    Node(int x):value(x){}

    Node(int val,vector<Node*> v):value(val)
    {
        children = v;
    }


};


Node *cloneTree(Node *root)
{
    if(!root)
        return NULL;
    Node *newRoot = new Node(root->value);
    for(const auto &n : root->children)
    {
        newRoot->children.push_back(cloneTree(n));
    }
    return newRoot;
}