#include<stdio.h>
#include<stdlib.h>


int* rotate(int *arr , int n,int k , int *l){
    *l = n;
    int *res = malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        res[(i + k)%n] = arr[i]; // res[i] = arr[(i+k)%n]; anticlockwise
    }
    return res;
}


int main(){

    int arr[] ={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int size = 0;
    int *res = rotate(arr, n, 3, &size);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d ",res[i]);
    }
}