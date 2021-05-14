#include<bits/stdc++.h>
using namespace std;
void printArr(vector<int> &v)
{
    for(auto num:v)
        cout<<num<<"    ";
    cout<<endl;
}
int main()
{
    vector<int> res = { 1,2,3,4,5};
    //int arr[5] = {1,2,3,4,5};
    printArr( res.begin() +1); 
    /* Proper pointer arithmetic to print 
    from 2nd element
    output should be  : 2 3 4 5 
    */
}