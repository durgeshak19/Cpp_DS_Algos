#include<bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    bool HasValue;
    TrieNode** Children;
    // Initialize your data structure here.
    TrieNode() {
        Children = new TrieNode*[26]();
        HasValue = false;
    }
    
    ~TrieNode(){
        for (int i = 0; i < 26; i++)
        {
            delete Children[i]; // delete NULL is safe, a no-op.
        }
        delete[] Children;
    }    
};
class Trie
{

private:

    TrieNode *root;
    TrieNode* getNode(string word , cool create)
    {
        TrieNode *pNode = root;
        int id;
        int n = word.size();
        for(int i =0 ;i<n ;i++)
        {
            id = word[i] - 'a';
            if(pNode->children[id] == NULL)
            {
                if(create)
                    pNode->children[id] = new TrieNode();
                else
                    return NULL;
            }
            pNode = pNode->children;
        }
        return pNode;
    }

public:

    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        getNode(word,true)->hasValue = true;
    }

    bool search(string word)
    {
        TrieNode *pNode = getNode(word ,false);
        return (pNode != NULL && pNode->hasValue);
    }

    bool startsWith(string prefix)
    {
        return (getNode(prefix,false)!= NULL);
    }
};