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

void insertInBinaryTree(TreeNode *root , int val)
{
    queue<TreeNode*> q;
    
    TreeNode* node = new TreeNode(val);
    TreeNode* temp;
    if(!node){
        cout<<"Memory Error\n";
        return;
    }
    if(!root){
        root  = node;
        return ;
    }
    q.push(root);

    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(temp->left)
            q.push(temp->left);
        else{
            temp->left = node;
            return; 
        }
        if(temp->right)
            q.push(temp->right);
        else{
            temp->right = node;
            return;//delete queue
        }
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    int val =9;

    insertInBinaryTree(root,val);
}