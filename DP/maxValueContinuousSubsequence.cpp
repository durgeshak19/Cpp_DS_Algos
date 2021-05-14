#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach O(n^3)
int maxValueSubsequence1(vector<int> &arr)
{
    int maxSum = 0;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int currSum = 0;
            for(int k=i;k<j;k++)
                currSum +=arr[k];

            if(maxSum<currSum)
                maxSum = currSum;
        }
    }
    return maxSum;
}
//Brute Froce O(n^2)
int maxValueSubsequence2(vector<int> &arr)
{
    int maxSum = 0;
    int n = arr.size();
    int currSum = 0;
    for(int i=0;i<n;i++)
    {   currSum = 0;
        for(int j=i ; j<n ;j++)
        {
            currSum += arr[j];
            if(maxSum<currSum)
                maxSum = currSum;
        }
    }
    return maxSum;
}

//Dyanmic Programing Approach with memory Approach
int maxValueSubsequence3(vector<int> &arr)
{
    int maxSum = 0;
    int n = arr.size();
    vector<int> dp(n,0);
    if(arr[0] > 0)
        dp[0] = arr[0];
    else dp[0] = 0;
    for(int i=1;i<n;i++)
    {   
        if(dp[i-1] + arr[i]>0)
            dp[i] = dp[i-1] + arr[i];
        else dp[i] = 0; 
    }
    for(auto n:dp)
        maxSum = max(n,maxSum);
    return maxSum;
}


//Dynamic Programming without memory
//IMPORTANT doesnt work if all input neagtive will return 0
//to avoid this we can insert a check in beingnning 
//and it will return max value among them
int maxValueSubsequence4(vector<int> &arr)
{
    int sumSofar = 0; 
    int sumEndingHere = 0;
    int n = arr.size();

    for(int i=0;i<n;i++)
    {
        sumEndingHere = sumEndingHere + arr[i];
        if(sumEndingHere < 0){
            sumEndingHere = 0;
            continue;
        }
        if(sumSofar < sumEndingHere)
            sumSofar = sumEndingHere;
    }
    return sumSofar;
}

int main()
{
    vector<int> v ={-2,11,-4,13,-5,2};
    cout<<maxValueSubsequence1(v)<<endl;
    cout<<maxValueSubsequence2(v)<<endl;
    cout<<maxValueSubsequence3(v)<<endl;
    cout<<maxValueSubsequence4(v)<<endl;
}