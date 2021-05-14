#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)


void printArray(vector<int> &A,int n){
    FOR(i,0,n)
    cout<<A[i]<<" ";
    cout<<endl;
}
void mergeArraye(vector<int> &A, int left ,int mid, int right)
{
    int i , left_end ,size , temp_pos ;
    left_end = mid -1;
    temp_pos = left ;
    size = right - left +1;
    vector<int> temp(size);

    while(left <= left_end && mid <= right){
        if(A[left] <= A[mid]){
            temp[temp_pos] = A[left];
            temp_pos+=1;
            left+=1;
        }
        else{
            temp[temp_pos] = A[mid];
            temp_pos+=1;
            mid+=1;
        }
    }

    while(left<=left_end){
        temp[temp_pos] = A[left];
        temp_pos += 1 ;
        left +=1 ;   
    }

    while(mid<=right){
        temp[temp_pos] = A[mid];
        temp_pos += 1 ;
        mid +=1 ;   
    }

    for(int i =0 ;i<size ;i++){
        A[right] = temp[right];
        right = right - 1;
    }
}

void mergeSort(vector<int> &A , int left , int right)
{
    if(left<right){
    int mid = (right-left)/2;
    mergeSort(A,left,mid);
    mergeSort(A,mid+1,right);
    mergeArraye(A,left,mid+1,right);
    }
}

int main()
{
    vector<int> A = { 5,2,4,7,1,3,2,6};
    int n = A.size();
    cout<<"MERGE SORT START"<<endl;
    printArray(A,n);
    mergeSort(A,0,n);
    cout<<"MERGE SORT END"<<endl;
    printArray(A,n);
    return 0;
}