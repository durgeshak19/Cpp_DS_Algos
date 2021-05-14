#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &A,int n){
    FOR(i,0,n)
    cout<<A[i]<<" ";
    cout<<endl;
}

int main()
{
    vector<int> v ={5,2,4,6,1,3};
    vector<int> v1={31,41,59,26,41,58};
    cout<<"SHELL SORT START\n"; 
    printArray(v,5);

    selectionSort(v,6);

    cout<<"SHELL SORT END\n";
    printArray(v,5);
}