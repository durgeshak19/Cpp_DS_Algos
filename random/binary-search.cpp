#include<iostream>
using namespace std;

int binary_search_iter(int *arr , int n ,int x){

    int low = 0;
    int high = n;
    int mid = 0;

    while(low<=high){
        
        mid = low + (high-low)/2;

        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            high = mid -1;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }        
    }
    return -1;
}

int binary_search_recur(int *arr , int x ,int low , int high){

    if(low > high){
        return -1;
    }
    int mid = low + (high-low)/2;

    if(arr[mid] == x)
        return mid;
    else if(arr[mid] < x)
        return binary_search_recur(arr , x , mid + 1, high);
    else  
        return binary_search_recur(arr , x , low, mid -1);

    return -1;
}


int main()
{

    int arr[] = { 1, 2, 3, 4, 5, 6};
    int x = 2;
    cout<<binary_search_iter(arr,6 , x);
    cout<<binary_search_recur(arr, x ,0 ,6);
}