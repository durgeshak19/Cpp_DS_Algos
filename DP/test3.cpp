#include<bits/stdc++.h>
using namespace std;

void countVowel(string str)
{   int count =0;
    for(auto c:str)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;
    }

    cout<<"\nNumber of Vowels in the string: "<<count;
}
int main()
{
    string str = "Qurinom";
    //cin>>str;
    countVowel(str);
    return 0;
}