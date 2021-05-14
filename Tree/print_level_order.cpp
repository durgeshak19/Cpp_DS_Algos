#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public :
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};


void printTreeLevelOrderReverse(TreeNode* root)
{
    queue<TreeNode*> q;
    stack<TreeNode*> s;
    TreeNode* temp;
    if(!root)   
        return ;
    
    q.push(root);
    
    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        s.push(temp);
    }
    while(!s.empty())
    {
        cout<<s.top()->val;
        s.pop();
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    printTreeLevelOrderReverse(root);
}