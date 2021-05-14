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

TreeNode *mirrorTree(TreeNode *root)
{
    TreeNode *temp;
    if(root)
    {
        mirrorTree(root->left);
        mirrorTree(root->right);

        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    return root;
}

int checkMirrors(TreeNode *root1 , TreeNode *root2)
{
    if(!root1 && !root2)
        return 1;
    if(!root1 || !root2 )
        return 0;
    return checkMirrors(root1->left,root2->right) && checkMirrors(root1->right , root2->left);
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    TreeNode *temp = mirrorTree(root);
    inOrder(temp);
    cout<<endl;
    inOrder(root);

}

