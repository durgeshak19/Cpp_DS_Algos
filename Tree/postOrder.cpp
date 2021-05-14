#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public :
    int val ;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;

    }
};
void postOrder(TreeNode *root)
{
    if(!root)
        return;
    
    if(root->left != NULL)
        postOrder(root->left);
    if(root->right)
        postOrder(root->right);
    cout<<root->val<<" ";

}

void postOrderIterative(TreeNode *root)
{
    stack<TreeNode*> s;
    TreeNode* temp = root;
    TreeNode* prev = NULL;
    do{
        while(temp){
            s.push(temp);
            temp = temp->left;
        }

        while(temp == NULL && !s.empty()){
            temp = s.top();
            s.pop();

            if(temp->right == NULL || temp->right == prev){
                cout<<temp->val<<endl;
                s.pop();
                prev = temp;
                temp = NULL;
            }
            else{
                temp = temp->right;
            }
        }
    }while(!s.empty());    
}

int main()
{

    
    return 0;
}