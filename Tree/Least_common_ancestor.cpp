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

TreeNode *LCA(TreeNode *root, TreeNode *p ,TreeNode *q)
{
    TreeNode *left ,*right;
    if(!root)
        return;
    if(root == p || root == q)
        return root;
    left = LCA(root->left , p ,q);
    right = LCA(root->right , p ,q);
    if(left && right)
        return root;
    else
        return (left ? left:right);

}