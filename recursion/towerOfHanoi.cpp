#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n , char &start , char &finish , char  &temp)
{
    if(n == 1)
    {
        cout<<"Move disc "<<n<<" from "<<start<<" to "<<finish<<endl;
        return ;
    }
    towerOfHanoi(n-1,start , temp , finish);
    
    cout<<"Move disc "<<n<<" from "<<start<<" to "<<finish<<endl;

    towerOfHanoi(n-1,temp , finish , start);


}

int main()
{
    int n = 3;
    char start = 'A';
    char finish = 'B';
    char temp = 'C';
    towerOfHanoi(n,start , finish , temp);
}