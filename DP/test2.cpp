#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
//Question not correct  prev ques same as this ques 
//presenting two solutions as with best of my understanding with the given example
//This solution finds the which string is greater in terms of character values and 
//next solution is lexicographical greater string 
void lexi(string str1,string str2)
{
    int c1=0,c2=0;
    
    FOR(i,0,str1.size())
        c1+=str1[i];

    FOR(i,0,str2.size())
        c2+=str2[i];

   //cout<<c1<<endl;
   //cout<<c2<<endl;    
    if(c1<c2)
        cout<<"\""<<str1<<"\" is less than "<<"\""<<str2<<"\"" ;
    else if(c1>c2)
        cout<<"\""<<str2<<" \" is less than "<<"\""<<str1<<" \"" ;
    else
        cout<<"\""<<str1<<"\" is equal to  "<<"\""<<str2<<"\"" ;
  
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


int main()
{

string str1="This is Excercise 1";
string str2="This is Excercise 2";
//cin>>str1>>str2;

lexi(str1,str2);
return 0;
}