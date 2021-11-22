#include<stdio.h>
#include<stdlib.h>

int** reverseMat(int A[][3] , int m , int n , int *len1 , int *len2){
    int i , j;
    *len1 = m;
    *len2 = n;

    int **B = (int**)malloc((*len1) * sizeof(int));

    for(int i=0;i<n;i++){
        B[i] = (int *)malloc((*len2)*sizeof(int));
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            B[i][n - 1 - j] = A[i][j]; 
        }
    }
    return B;
}

int main(){

    int arr[][3] = {{1,2,3} ,{4,5,6} ,{7,8,9}};
    int **res = NULL;
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);

    int a = 0;
    int b = 0;
    res = reverseMat(arr, m , n , &a , &b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

