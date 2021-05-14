// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
  public:
    void inOrder(Node *root, string &res)
    {
        if(root==NULL)
        {
            res+="N ";
            return;
        }
        inOrder(root->left, res);
        
        res+=to_string(root->data) + " ";
        
        inOrder(root->right, res);
    }
    void preOrder(Node *root, string &res)
    {
        if(root==NULL)
        {
            res+="N ";
            return;
        }
        res+=to_string(root->data) + " ";
        
        preOrder(root->left, res);
        
        preOrder(root->right, res);
    }
    //Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) 
    {
        // Your code here
        
        if(S==NULL)
            return true;
        if(T==NULL)
            return false;
        
        string inT, inS, preT, preS;
        
        inOrder(T, inT);
        inOrder(S, inS);
        preOrder(T, preT);
        preOrder(S, preS);
        
        // cout<<inT<<endl;
        // cout<<inS<<endl;
        // cout<<preT<<endl;
        // cout<<preS<<endl;
        
        if(inT.find(inS)==string::npos)
        {
            return false;
        }
        if(preT.find(preS)==string::npos)
            return false;
        else
            return true;
        return true;
    }
};

// { Driver Code Starts.

int main() {
   
        string strT="10 20 30 40 50 N 60 N N 70 80 N N", strS = "50 70 80";
        Node *rootT = buildTree(strT);
        Solution obj;
        Node *rootS = buildTree(strS);
        cout << obj.isSubTree(rootT, rootS) << "\n";

    return 0;
}  // } Driver Code Ends
