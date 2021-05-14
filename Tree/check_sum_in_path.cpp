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

void printArray(int *arr , int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" -> ";
    cout<<"NULL";
    cout<<endl;
}
bool hasSum(TreeNode *root , int sum)
{
    if(root==NULL)
        return (sum == 0);
    else
    {
        int remSum = sum - root->val;
        if((root->left && root->right) || (!root->left && !root->right))
            return hasSum(root->left,remSum) || hasSum(root->right,remSum);
        else if(root->left)
            return hasSum(root->left, remSum);
        else if(root->right)
            hasSum(root->right , remSum);
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
    int arr[10];
    cout<<hasSum(root,9);
}