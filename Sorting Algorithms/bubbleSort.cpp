#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
/*
PseudoCode 
    BUBBLE-SORT(A)
    for i=1 to A.length -1
        index = i
        key = A[i]
        for j=i+1 to A.length
            if key > A[j] 
                index = j
                key = A[j]
        
        A[index] = A[i]
        A[i] = key
*/

void printArray(vector<int> &A,int n){
    FOR(i,0,n)
    cout<<A[i]<<" ";
    cout<<endl;
}

void bubbleSort(vector<int> &v,int n)
{
    FOR(i,0,n-1)
    {
        int index = i;
        int key = v[i];
        FOR(j,i+1,n)
        {
            if(key > v[j])
            {
                index = j;
                key = v[j];
            }
        }
        v[index] = v[i];
        v[i] = key;
        printArray(v,n);
    }
}

void bubbleSorte(vector<int> &A,int n)
{
    for(int i=0 ; i<n-1;i++)
    {
        for(int j = 0 ; j<n;j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }

        }
    }
}
int main()
{
    vector<int> v= {5,4,7,1,2,9,0};
    int n= v.size();
    printArray(v,n);
    cout<<"Bubble Sort Start"<<endl;
    bubbleSorte(v,n);
    cout<<"Bubble Sort end"<<endl;
    printArray(v,n);
}