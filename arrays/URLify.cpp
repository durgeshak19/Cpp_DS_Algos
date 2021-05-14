#include<bits/stdc++.h>
using namespace std;

void replaceSpaces(char *str, int len)
{
    int numOfSpaces = 0;
    int i = 0, j = 0;
    for ( i = 0; i < len; ++i ) {
        if (str[i] == ' ') {
            ++numOfSpaces;
        }
    }
    
    int extendedLen  = len + 2 * numOfSpaces;
    i = extendedLen - 1;
    for( j = len - 1; j >= 0; --j ) {
        if ( str[j] != ' ' ) {
           str[i--] = str[j];
        } else {
            str[i--] = '0';
            str[i--] = '2';
            str[i--] = '%';
        }
    }
}

int main()
{
    char s[] = "Mr John Doe          ";
    replaceSpaces(s,19);
    cout<<s;
    return 0;
}