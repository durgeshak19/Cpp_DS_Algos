#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &A,int n){
    for(int i = 0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void shellSort(vector<int> &A,int n)
{
    int i,j,h,key;
    for(int h = 1; h < n/9; h=3*h+1);

    for( ; h>0;h=h/3){
        for(i = h+1;i<n;i+=1){
            key = A[i];
            j=i;
            while(j>h && A[j-h] >key){
                A[j] =A[j-h];
                j-=h;
            }
            A[j] = key;
        }
    }

}  

int main()
{
    vector<int> v ={5,2,4,6,1,3};
    vector<int> v1={31,41,59,26,41,58};
    cout<<"SHELL SORT START\n"; 
    printArray(v,5);

    shellSort(v,6);

    cout<<"SHELL SORT END\n";
    printArray(v,5);
}