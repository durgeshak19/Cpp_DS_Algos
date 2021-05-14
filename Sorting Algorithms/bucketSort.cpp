#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define BUCKET 10
using namespace std;
void printArray(vector<int> &A,int n){
    FOR(i,0,n)
    cout<<A[i]<<" ";
    cout<<endl;
}

void selectionSort(vector<int> &A,int n)
{
    vector<int> buckets[10];

    for(int  i = 0;i<10;i++)
        buckets[i] = 0;
    
    for(int i=0;i<n;i++)
        buckets[A[i]]+=1;
    
    for(int i =0 ,j=0; j<10;j++){
        for(int k = buckets[j] ;k>0;--k){
            A[i++] = j;
        }
    }

    


}


int main()
{
    vector<int> v ={5,2,4,6,1,3};
    vector<int> v1={31,41,59,26,41,58};
    cout<<"SELECTION SORT START\n"; 
    printArray(v,5);

    selectionSort(v,6);

    cout<<"SELECTION SORT END\n";

    printArray(v,5);
}