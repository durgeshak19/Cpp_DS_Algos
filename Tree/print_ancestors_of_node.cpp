#include<iostream>
using namespace std;
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

int printAncestors(TreeNode *root , TreeNode *node)
{
    if(root == NULL)
        return 0;
    if(root->left == node || root->right == node || printAncestors(root->left , node) ||  printAncestors(root->right , node))
    {
        cout<<root->val;
        return 1;
    }
    return 0;
}