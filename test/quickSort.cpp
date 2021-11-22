#include<bits/stdc++.h>
using namespace std;

void swapx(int *a , int *b){
	
	int temp ;
	temp =*a;
	*a = *b;
	*b = temp;
}
// 
int partition(vector<int> &arr ,int low, int high){


	int i=low-1;
	int pivot = arr[high];
	
	for(int j = low ;j<high; j++){
	 
	 	if(arr[j] < pivot){
	 		i++;
	 		swapx(&arr[i],&arr[j]);
	 	}
	}
     // 15 6 7 3 14
    //6 7 3 15 14
	 swapx(&arr[i+1] ,&arr[high]);
	 //6 7 3 14 15
	return i+1;
}

//T(n) = O(n) + 
void quickSort(vector<int> &nums ,int low , int high ){
	
	if(low< high){
	
	
	int pivot =partition( nums , low , high );
	quickSort(nums, low , pivot - 1);
	quickSort(nums, pivot +1,high );

	}

}
 
int kthElement(vector<int> &nums , int k)
{
	
	quickSort(nums,0, nums.size()-1);
	return nums[k -1];

}



int main()
{


    vector<int> nums= {1,4,7,3,6,8,2,2,5,-5,-7,2,21};

    cout<<kthElement(nums , 5);

}