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

bool searchEleRecur(TreeNode* root , int &val)
{
    if(root){
        if(root->val == val)
            return true;
        else
            return searchEleRecur(root->left , val) || searchEleRecur(root->right , val);
    }
    return false;
}

bool searchEleIter(TreeNode* root ,int &val)
{
    if(root){
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();

            if(temp->val == val)    
                return true;

            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return false;
}

bool searchEleIter2(TreeNode* root , int & val)
{
    stack<TreeNode*> s;
    while(1){
        while(root){
            if(root->val == val)
                return true;
            s.push(root);
            root = root->left;
        }
        if(s.empty())
            break;
        root = s.top();
        s.pop();
        root = root->right; 
    }
    return false;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    int val =9;

    cout<<searchEleRecur(root,val)<<endl;
    cout<<searchEleIter(root,val)<<endl;
    cout<<searchEleIter2(root,val)<<endl;
    
}