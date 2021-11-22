#include<iostream>
using namespace std;

void merge(int *arr ,int low ,int mid ,int high){

    int n1 = mid - low + 1;
    int n2 = high - mid;

    int temp1[n1];
    int temp2[n2];

    for(int i = low;i<n1 ; i++){
        temp1[i] = arr[low + i];
    }
    for(int i = 0; i<n2;i++){
        temp2[i] = arr[mid + 1 + i];
    }


    int  i= 0,j = 0, k =low;
    while(i<n1 && j <n2){
        if(temp1[i] < temp2[j]){
            arr[k] = temp1[i];
            i++;
        }
        else{
            arr[k] == temp2[j];
            j++; 
        }
        k++;
    }


    while(i<n1){
        arr[k] = temp1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = temp2[j];
        j++;
        k++;
    }
}

void merge_sort(int *arr , int low , int  high){


    if(low< high){

        int mid = low + (high - low )/2;

        merge_sort(arr , low , mid);
        merge_sort(arr , mid+ 1 , high);
        merge(arr, low , mid , high);

    }
    
}


int main(){

}