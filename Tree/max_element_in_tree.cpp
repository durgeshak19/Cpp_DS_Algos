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

int maxElement(TreeNode* root)
{
    int max = INT_MIN;

    int root_val , left , right;
    if(root){
        root_val = root->val;

        left = maxElement(root->left);
        right = maxElement(root->right);

        if(left > right)
            max = left;
        else
            max = right;
        if(root_val > max)
            max = root_val;
    }
    return max;
}

int maxElementIter(TreeNode* root)
{
    int mx = INT_MIN;

    queue<TreeNode*> q;
    TreeNode* temp;
    q.push(root);
    while(!q.empty()){

        temp = q.front();
        q.pop();
        mx = max(temp->val , mx);

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return mx;
}

int maxElementIterDFS(TreeNode* root)
{
    int mx = INT_MIN;
    TreeNode* temp;
    stack<TreeNode*> s;
    while(1){
        while(root){
            s.push(root);
            root = root->left;
        }
        if(s.empty())
            break;
        root = s.top();
        s.pop();
        mx = max(mx ,root->val);
        root = root->right;
    }
    return mx;
}

int maxElementIterDFS2(TreeNode* root)
{
    stack<TreeNode*> s;
    int mx = INT_MIN;

    while(1){
        while(root){
            mx= max(mx , root->val);
            s.push(root);
            root = root->left;
        }
        if(s.empty())
            break;
        root = s.top();
        s.pop();
        root = root->right;
    }
    return mx;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout<<maxElement(root)<<endl;
    cout<<maxElementIter(root)<<endl;
    cout<<maxElementIterDFS(root)<<endl;
    cout<<maxElementIterDFS2(root)<<endl;
    
}