#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    char s[100];
    int lower,upper;
    lower = upper = 0;
    cin>>s;
    for (int i =0; i < strlen(s); i++)
    {
        if (islower(s[i]) != 0)
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if (lower >= upper)
    {
        for (int i =0; i < strlen(s); i++)
        {
            cout<<(char)tolower(s[i]);
        }
    }
    else
    {
        for (int i =0; i < strlen(s); i++)
        {
            cout<<(char)toupper(s[i]);
        }
    }
}

