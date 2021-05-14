#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public :
    int val ;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;

    }
};
void preOrder(TreeNode *root)
{
    if(!root)
        return;

    cout<<root->val<<" ";
    
    if(root->left)
        preOrder(root->left);
    if(root->right)
        preOrder(root->right);
    
}

void preOrderIterative(TreeNode *root)
{
    stack<TreeNode*> s;
    TreeNode* temp = root;
    s.push(temp);
    while(1){
        while(temp){
            std::cout<<temp->val;
            s.push(temp);
            temp = temp->left;
        }

    if(s.empty())
        break;
    temp = s.top();
    s.pop();
    temp = temp->right;
    }

}

    
int main()
{

    
    return 0;
}