#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)

using namespace std;
void printArray(vector<int> &A,int n){
    FOR(i,0,n)
    cout<<A[i]<<" ";
    cout<<endl;
}

void selectionSort(vector<int> &A,int n)
{
    int min ;
    for(int i= 0 ;i<n-1 ;i++){
        min =i ;
        for(int j = i+1;j<n;j++)
        {
            if(A[j] < A[min])
                min = j;
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;    
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