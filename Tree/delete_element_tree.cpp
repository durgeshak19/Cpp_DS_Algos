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


TreeNode* deepestNode(TreeNode* root)
{
    TreeNode* temp;

    if(root)
    {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
                
            if(temp->right)
                q.push(temp->right);
        }
    }
    return temp ;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(5);

    cout<<deepestNode(root)->val;

}