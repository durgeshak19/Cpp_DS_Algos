#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int value;
    TreeNode *left ,*right;

    TreeNode(int data) : value(data), left(NULL) ,right(NULL){};

};
int getHeight(TreeNode *root)
{
    if(root==NULL)
        return -1;
    return 1 + max(getHeight(root->left),getHeight(root->right)) ;
}

bool isBalanced(TreeNode *root)
{
    if(root == NULL)
        return true;
    
    int diff = getHeight(root->left) - getHeight(root->right);
    if(diff>1)
        return false;
    else
        return isBalanced(root->left) && isBalanced(root->right);
}

int checkHeight(TreeNode *root)
{
    if(root == NULL)
        return -1;
    int leftHeight = checkHeight(root->left);
    if(leftHeight =-1)
        return-1;
    int rightHeight = checkHeight(root->right);
    if(rightHeight =-1)
        return-1;
    
    if(abs(leftHeight-rightHeight)>1)
        return -1;

    return 1 + max(leftHeight,rightHeight) ;  
}

bool isBalancedTree(TreeNode *root)
{
    return checkHeight(root) != -1;
}
int main()
{
     TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    // root->left->left->left = new TreeNode(7);


    root->left->right = new TreeNode(5);
    cout<<isBalancedTree(root);
}