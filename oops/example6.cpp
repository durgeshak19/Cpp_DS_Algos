#include<bits/stdc++.h>
using namespace std;



// a = 7 
// b = 3
// a = a + b = 10
// b = a-b = 7;
// a = a-b = 3 ;  

int main()
{
    char  a[] = "NAxMAaN";
    int len = strlen(a);
    len--;
    for(int i =0 ;i<len/2;i++)
    {
        a[i] = a[i] + a[len-i];
        a[len-i] = a[i] - a[len-i];
        a[i] = a[i] - a[len-i];
    }
    cout<<a;

}