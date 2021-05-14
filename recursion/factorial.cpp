#include<bits/stdc++.h>
using namespace std;

void  descend(int n)
{
    if(n < 0 )
        return ;
    cout<<n<<" ";
    descend(n-1);
}


void  ascend(int n)
{
    if(n < 0 )
        return ;
    ascend(n-1);

    cout<<n<<" ";
}

int main()
{
    for(int i = 0 ;i<5 ;i++){
    cout<<"print of "<<i<<" is " ; descend(i); cout<<"\n ";}
    for(int i = 0 ;i<5 ;i++){
    cout<<"print of "<<i<<" is " ; ascend(i); cout<<"\n ";}

}