#include<bits/stdc++.h>
using namespace std;

bool checkMaxOneOdd(int *table)
{
    bool foundOdd = false;
    for(int i=0;*(table+i)!='\0';i++)
        if(*(table+i) %2 ==1 )
        {
            if(foundOdd)
                return false;
            else
                foundOdd = true;
        }
        return true;
}

int* buildCharFrequency(string s)
{

}
bool isPermutationPalindrome(string s)
{
    int *table = buildCharFrequency(s);
    return checkMaxOneOdd(table);
}


int main()
{

}