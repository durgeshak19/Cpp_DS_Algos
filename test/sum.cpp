
#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> pairSum(vector<int> nums ,int val){

// 	set<int> st;
// 	// ele1  + ele2 = val
// 	// ele2 = val1 - ele1
// 	vector<vector<int>> res;
// 	st.insert(nums[0]);
	
// 	for(int i=1;i<nums.size();i++){
		
// 		int diff = val - nums[i];
		
// 		auto it  = st.find(diff);
		
// 		if(it != st.end()){
// 			res.push_back({nums[i],*it});
// 		}
// 		st.insert(nums[i]);
// 	}

// 	return res;
// } 

void printList(vector<vector<int>> &arr){

    for(int i=0;i<arr.size();i++){

        
            cout<<arr[i][0]<<" - "<<arr[i][1]<<endl; 
    
    }
}
// dp [] [] =

vector<vector<int>> pairSum(vector<int> &res ,vector<int> &temp, int sum ,int val){

// {1,2,2} , {7,3,-5} {-7,7,5} ,{5}
    if






}



// base case = arr = 0
// if sum = val push into the res array  /// 
//
// temp(nums[i]) , setsum(res,temp , sum - num[i])  setsum (res,temp ,sum)



int main()
{
    vector<int> nums= {1,4,7,3,6,8,2,2,5,-5,-7,2,21};
    vector<vector<int>> res = pairSum(nums , 5);
    printList(res);

}