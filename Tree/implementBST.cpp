#include<bits/stdc++.h>
using namespace std;

class BST
{  
    int val ;
    BST* left;
    BST* right;
public:
    BST()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }
    BST(int data){
        val = data;
        left = NULL;
        right = NULL; 
    }

    BST *insert(BST *,int);
    BST *insertIter(BST *,int);
    BST *deleteNode(BST*,int );
    void preOrder(BST *);
    void preOrderIterative(BST *);
    void inOrder(BST *);
    void inorderIterative(BST *);
    friend int treeMin(BST*);
    friend int treeMax(BST*);
};


BST* BST:: deleteNode(BST *root,int x)
{
    
}
/*
BST* BST ::insert(BST *root ,int val)
{
    if(!root)
        return new BST(val);

    if(val > root->val)
        root->right = insert(root->right,val);
    else
        root->left = insert(root->left,val);
    
    return root;
}*/

BST* BST::insert(BST* root,int val)
{
    BST* node = new BST(val);
 
    BST *x = root;
    BST *y = NULL;
 
    while (x != NULL) {
       
        y = x;
        if (val < x->val)
            x = x->left;
        else
            x = x->right;
    }
 
    if (y == NULL)
        y = node;
    else if (val < y->val)
        y->left = node;
 
    else
        y->right = node;
 
    
    return y;
}

void BST ::preOrder(BST* root) 
{ 
    if (!root) 
        return;
    cout << root->val << " ";       
    preOrder(root->left); 
    preOrder(root->right); 
} 

void BST::preOrderIterative(BST *root)
{
    stack<BST*> st;
    st.push(root);
    BST *temp =NULL;
    while(!st.empty())
    {   
        
        temp = st.top();
        st.pop();
        if(temp!=NULL)
        {   
            st.push(temp->right);
            cout<<temp->val<<" ";
            st.push(temp->left);
            
        }
    }
}

void BST::inOrder(BST *root)
{
    if(!root)
        return;
    if(root->left)
        inOrder(root->left);
    cout<<root->val<<" ";
    if(root->right)
        inOrder(root->right);
}

void BST::inorderIterative(BST *root)
{
    stack<BST *> st;

    BST *temp = root;

    while(!temp || !st.empty())
    {
        while(!temp)
        {
            st.push(temp);
            temp=temp->left;
        }
        temp = st.top();
        st.pop();
        cout<<temp->val<<" ";
        temp = temp->right;
    }

}

int treeMin(BST *root)
{
    BST *temp=root;
    while(temp->left)
    {
        temp=temp->left;
    }
    return temp->val;
}

int treeMax(BST *root)
{
    BST *temp=root;
    while(temp->right)
        temp=temp->right;
    return temp->val;
}

int succesor(BST *root)
{
    if(root->right)
        return treeMin(root->right);
    
}
int main()
{
    BST b , *root=NULL;
    root = b.insert(root,8);
    b.insert(root,5);
    b.insert(root,7);
    b.insert(root,10);
    b.insert(root,1);
    b.insert(root,12);

    b.preOrder(root);
    cout<<endl;
    b.inorderIterative(root);
    cout<<endl<<"++++++++";
    b.inOrder(root);
    cout<<treeMin(root);
    cout<<treeMax(root);
    return 0;
}