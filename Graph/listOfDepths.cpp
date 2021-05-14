#include<bits/stdc++.h>
using namespace std;

class TreeNode 
{
    public :
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : value(x) , left(NULL) ,right(NULL){}

};


void createLevel(TreeNode *root ,vector<vector<TreeNode*>>& res,int level )
{
    if(!root)
        return;
    vector<TreeNode*> temp ;

    if(res.size() == level){
        res.push_back(temp);
    }
    else{
        temp = res[level];
    }
    temp.push_back(root);

    createLevel(root->left , res , level +1);
    createLevel(root->right , res , level +1);
}
vector<vector<TreeNode*>>  createLevelBFS(TreeNode *root)
{
    vector<vector<TreeNode*>> res;

    vector<TreeNode*> temp;
    if(root!= NULL)
        temp.push_back(root);
    
    while(temp.size()>0)
    {
        res.push_back(temp);
        vector<TreeNode*> parents = temp;
        temp.clear();
        for(TreeNode* p : parents)
        {
            if(p->left)
                temp.push_back(p->left);
            if(p->right)
                temp.push_back(p->right);
        }

    }
    return res;
}


vector<vector<TreeNode*>> listOfDepths(TreeNode *root)
{
    vector<vector<TreeNode*>> res ;
    createLevel(root, res , 0);
    return res;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<vector<TreeNode*>> node ;
    node = createLevelBFS(root);
    for(int i=0;i<node.size();i++)
    {
        for(int j=0;j<node[i].size();j++)
        {
            cout<<node[i][j]->value<<"-> ";
        }    
        cout<<endl;
            
    }
    return 0;
}