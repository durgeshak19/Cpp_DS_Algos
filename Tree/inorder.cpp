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

void inOrder(TreeNode *root)
{
    if(!root)
        return;
    if(root->left != NULL)
        inOrder(root->left);
    cout<<root->val<<" ";
    if(root->right)
        inOrder(root->right);

}

void inOrderIterative(TreeNode* root)
{
    stack<TreeNode*> s;
    TreeNode* temp = root;
    while(1){
        while(temp){
            s.push(temp);
            temp = temp->left;
        }
        if(s.empty())
            break;

        temp = s.top();
        s.pop();
        cout<<temp->val<<endl;
        temp = temp->right;
    }
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    inOrder(root);
    return 0;
}