#include<iostream>
#define Load_Factor 20

class ListNode
{
    public:
    int key;
    int val;
    ListNode *next;
};

class HashTableNode
{
    public:
    int bcount; // number of elements in block
    ListNode *next;
};

class HashTable
{
    public:
    int tsize;
    int count; // number of elements in table
    HashTableNode **Table;
};

HashTable* createHashTable(int size)
{
    HashTable *h = (HashTable*)malloc(sizeof(HashTable));

    if(!h)
        return NULL;

    h->tsize = size/Load_Factor;
    h->count = 0;
    h->Table = (HashTableNode**)malloc(sizeof(HashTableNode*)*h->tsize);

    if(!h->Table)
        return NULL;
    for(int i=0;i<h->tsize;i++)
    {
        h->Table[i]->next = NULL;
        h->Table[i]->bcount = 0;
    }
    return h;
}

int hashSearch(HashTable *h, int val)
{
    ListNode *temp = h->Table[Hash(data,h->tsize)]->next;

}
