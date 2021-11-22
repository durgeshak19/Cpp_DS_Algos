#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(const int A[][3], int n, int m, int *len1) {
    *len1 = n *m;
    int *res = malloc((*len1) *sizeof(int));
 
    int i, k = 0, l = 0;
 

    int w = 0;
    while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i) {
            res[w] =  A[k][i];
            w++;
        }
        k++;
 
        /* Print the last column from the remaining columns
         */
        for (i = k; i < m; ++i) {
            res[w] = A[i][n - 1];
            w++;
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                res[w] = A[m - 1][i];
                w++;
            }
            m--;
        }
 
        /* Print the first column from the remaining columns
         */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                res[w] = A[i][l];
                w++;
            }
            l++;
        }
    }
    return res;
}

int main(){

    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int arr[][2] = {{1,2},{3,4},{5,6}};
    
    int *res = NULL;
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);

    int a = 0;
    res = spiralOrder(arr, n , m , &a );
    for(int i=0;i<a;i++){
            printf("%d ",res[i]);
    }
    return 0;

}