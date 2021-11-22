#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

ll partition(ll arr[],ll low ,ll high){

    ll i = low-1;
    ll pivot = arr[high];

    for(ll j=low;j<high;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }    

    swap(arr[i+1] ,arr[high]);
    return i+1;
}
void quickSort(ll arr[] , ll low, ll high){

    if(low<=high){
        ll pivot = partition(arr,low , high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }

}
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif


    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    
    quickSort(arr,0,n-1);
    ll count = 1;

    // for(ll i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    
    // cout<<endl;

    for(ll i=0;i<n-1;i++)
        if(arr[i] != arr[i+1])
            count++;
    
    cout<<count;
    
}
