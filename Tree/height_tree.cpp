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

int height(TreeNode* root)
{
    int left , right;
    if(!root)
        return 0;
    
    left = height(root->left);
    right = height(root->right);

    return max(left,right) + 1;
}

int heightBFS(TreeNode* root)
{
    int size = 0;
    if(root)
    {
        TreeNode* temp;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            temp = q.front();
            q.pop();
            if(temp == NULL)
            {
                if(!q.empty())
                    q.push(NULL);
                size++;
            }
            else{
                if(temp->left)
                    q.push(temp->left);
                
                if(temp->right)
                    q.push(temp->right);
            }
        }
    }
    return size ;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(5);

    cout<<heightBFS(root);

}