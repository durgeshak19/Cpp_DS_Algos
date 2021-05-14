#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int value;
    TreeNode *left, *right;
    TreeNode(int x) : value(x) , left(NULL) ,right(NULL){}

};
bool checkBST(TreeNode *root,int minValue ,int maxValue)
{
    if(root == NULL)
        return true;
    if(root->left->value > root->value || root->right->value < root->value )
        return false;
    else
    {
        return checkBST(root->left,minValue,root->value) && checkBST(root->right,root->value,maxValue);
    }
    
}

int main()
{
     TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout<<checkBST(root);
}