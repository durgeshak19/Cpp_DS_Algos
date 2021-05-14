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


int sizeTree(TreeNode* root)
{
    if(root)
        return 1 + sizeTree(root->left) + sizeTree(root->right);
    return 0;
}


int sizeTreeIterIter(TreeNode* root)
{
    int size = 0;
    if(root)
    {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp ;
        while(!q.empty())
        {
            size++;
            temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }

    return size;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout<<sizeTreeIterIter(root);
}