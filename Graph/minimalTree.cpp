#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int value;
    Node *left;
    Node *right;

    Node (int x): value(x) , left(NULL) ,right(NULL){}

};

void preOrder(Node *root)
{
    if(root == NULL)
        return;
    cout<<root->value;
    preOrder(root->left);
    preOrder(root->right);
}
Node* createMinimalBST(vector<int> arr, int low, int high)
{
    if (low > high) {
        return NULL;
    }
    int mid = (low + high) / 2;
    Node* node = new Node(arr[mid]);
    node->left = createMinimalBST(arr, low, mid - 1);
    node->right = createMinimalBST(arr, mid + 1, high);
    return node;
}

Node *createMinimalBST(vector<int> arr)
{
    if (arr.size() == 0)
        return NULL;
    return createMinimalBST( arr, 0, ((int)arr.size()) - 1 );
}




int main()
{
    vector<int> v = {1,2,3,4,5,6,7};
    Node* root = createMinimalBST(v);
    preOrder(root);
    return 0;
}

