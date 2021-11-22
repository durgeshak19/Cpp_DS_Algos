#include<bits/stdc++.h>
using namespace std;

class Tree{
    public:
    int val;
    Tree *left , *right;
};

bool bfs_tree_recur(Tree *root , int x){

    int temp;
    if(root == NULL){
        return -1;
    }
    else{
        if(root->val == x){
            return true;
        }
        else{
            temp = bfs_tree_recur(root->left , x);
            if(temp != 0)
                return temp;
            else return bfs_tree_recur(root->right,x);
        }
    }
    return 0;
}

bool level_order_traversal(Tree *root , int x){
    Tree *temp;
    if(!root)
        return -1;
    queue<Tree*> q;
    q.push(root);

    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(temp->val = x){
            return true;
        }

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

    return false;
}

