#include<bits/stdc++.h>
using namespace std;

class SparseVector
{
    public :
    map<int,int> m; // key = index , value = val;
    int size = 0;
    SparseVector(vector<int> num ,int size)
    {
        this->size = size;
        for(int i=0;i<num.size();i++)
        {
            if(num[i])
                m[i] = num[i] ;
        }
    }

    int dotProduct(SparseVector *v2 )
    {
        if(this->size != v2->size)
            return INT_MIN;
        map<int, int>::iterator it;
        int sum=0;
        for (it = v2->m.begin(); it != v2->m.end(); it++)
        {
            if(this->m.find(it->first)->second != 0)  
                sum += this->m[it->first] * it->second;
        }
        return sum;
    }

};


int main()
{
    vector<int> num1 = {1,0,0,2,3};
    vector<int> num2 = {0,3,0,4,0};
    SparseVector *v1 = new SparseVector(num1,num1.size());
    SparseVector *v2 = new SparseVector(num2,num2.size());

    cout<<v1->dotProduct(v2);

}