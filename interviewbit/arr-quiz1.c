#include<stdio.h>
#include<stdlib.h>

int* mirror_image(int *arr , int n , int *size){
    *size = n * 2;
    int *res = malloc((*size) * sizeof(int));
    for(int i =0 ;i<n;i++){ 
        res[i] = arr[i];
        res[i+n] = arr[(n-i-1)];
    }
    return res;
}

int main(){
    int arr[] = {5, 10 ,2 ,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int size = 0;

    int *res = mirror_image(arr , n, &size);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d ",res[i]);
    }
}