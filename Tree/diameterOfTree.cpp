#include<iostream>

int max(int a ,int b)
{
    return a>b ? a:b;
}
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

int diameter(TreeNode *root ,int *ptr)
{
    if(root == NULL)
        return 0;
    int left = diameter(root->left,ptr);
    int right = diameter(root->right,ptr);

    if(left + right > *ptr)
        *ptr = left +right;
    return max(left,right) + 1;
}