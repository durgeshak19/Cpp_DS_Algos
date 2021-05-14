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


void deleteTree(TreeNode* root)
{
    if(root)
    {
        deleteTree(root->left);
        deleteTree(root->right);
        free(root);
    }

}


int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout<<root<<endl;
    deleteTree(root);
    cout<<root;
}