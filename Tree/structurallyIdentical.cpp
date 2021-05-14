#include<iostream>

class TreeNode
{
    public:
    int val;
    TreeNode *left, *right;
    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};
#define si structurallyIdentical

bool si(TreeNode *root1, TreeNode *root2)
{
    if(root1 == NULL && root2 == NULL)
        return true;
    if(root1 == NULL || root2 == NULL)
        return false;
    
    return (root1->val == root2->val) && si(root1->left,root2->left) && si(root1->right , root2->right);
}