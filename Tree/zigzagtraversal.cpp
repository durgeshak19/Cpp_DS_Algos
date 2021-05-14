#include<bits/stdc++.h>
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

void zigzagTraversal(TreeNode *root)
{
    TreeNode *temp;
    int leftToRight = 1;
    if(!root)
        return;
    stack<TreeNode*> currLevel , nextLevel;
    currLevel.push(root);
    while(!currLevel.empty())
    {
        temp = currLevel.top();
        currLevel.pop();

        if(temp)
        {
            cout<<temp->val;
            if(left)
        }

    }
}
