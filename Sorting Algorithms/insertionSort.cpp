#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

/*PSeudo Code
InsertionSort(A)
    for j = 2 to A.length
        key = A[j]
        //insert A[j] into the sorted sequnece A[1...j-1]
        i=j-1;
        while(i>=0 && A[i] > key)
            A[i+1] = A[i]
            i = i-1;
        A[i+1] = key
*/
void printArray(vector<int> &A,int n){
    FOR(i,0,n)
    cout<<A[i]<<" ";
    cout<<endl;
}
void insertionSort(vector<int> &A,int n,string s="inc")
{   
    if(s == "inc"){

    for(int j = 1;j<n-1;j++){
        int key = A[j];
        int i= j-1;
        while(i>=0 && A[i]>key){
            A[i+1] = A[i];
            i-=1;
        }
        A[i+1] = key;
        printArray(A,5);
    }
    }
    else if(s == "dec"){

    FOR(j,1,n-1){
        int key = A[j];
        int i= j-1;
        while(i>=0 && A[i]<key){
            A[i+1] = A[i];
            i-=1;
        }
        A[i+1] = key;
        printArray(A,5);
    }
    }
    else return;

}

void insertionSorte(vector<int> &A,int n)
{
    int key ;
    for(int i = 1; i<n-1;i++ ){
        key = A[i];
        int j= i-1;
        while(j>=0 && key <A[j]){
           A[j+1] = A[j];
           j-=1;
        }
        A[j+1] = key;
    }
}

int main()
{
    vector<int> v ={5,2,4,6,1,3};
    vector<int> v1={31,41,59,26,41,58};
    printArray(v,5);
    
    cout<<"INSERTION SORT START\n"; 
    insertionSorte(v,6);
    cout<<"INSERTION SORT END\n";

    printArray(v,5);
    // cout<<"++++++++++++++++++"<<endl;
    // printArray(v1,5);
    
    // cout<<"INSERTION SORT START\n"; 
    // insertionSort(v1,6,"dec");
    // cout<<"INSERTION SORT END\n";

    // printArray(v1,5);
    
    return 0;
}