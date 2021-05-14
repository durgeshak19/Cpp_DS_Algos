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
void printPathsRecur(TreeNode *root , int *path , int pathLen)
{
    if(root==NULL)
        return;
    path[pathLen] = root->val;
    pathLen++;
    if(!root->left && !root->right)
        printArray(path,pathLen);
    else
    {
        printPathsRecur(root->left,path,pathLen);
        printPathsRecur(root->right,path,pathLen);
    }

}


int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    int arr[10];
    printPathsRecur(root,arr,0);
}