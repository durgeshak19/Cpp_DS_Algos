#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sortColors(vector<int>& nums) {
   int low = 0;
   int high = nums.size() - 1;
   int mid=0;
   while(mid<=high){
       if(nums[mid] == 0){
           swap(nums[low] , nums[mid]);
           low++;
           mid++;
       }
       else if(nums[mid] == 2){ 
           swap(nums[high] , nums[mid]);
           high--;
       }
       else mid++;
   }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sortColors(arr);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
}