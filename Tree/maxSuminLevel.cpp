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


int maxSuminLevel(TreeNode* root)
{
    queue<TreeNode*> q;
    TreeNode* temp;
    if(!root)   
        return -1;
    
    q.push(root);
    q.push(NULL);
    int currSum  = 0;
    int sum = 0;


    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            // currSum += temp->val;
            if(currSum>sum)
                sum = currSum;
            currSum = 0;

            if(!q.empty())
                q.push(NULL);
                
        }
        else{
            currSum+=temp->val;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return sum;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(5);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(2);

    cout<<maxSuminLevel(root);
}