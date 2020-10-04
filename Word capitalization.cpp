#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int c,d;
    string s;
    cin>>s;
    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(islower(s.substr(i,i)) != 0 )
        {
            c++;
        } else
        {
            d++;
        }
    }
    if(c>d)
    {
        
    }
}

