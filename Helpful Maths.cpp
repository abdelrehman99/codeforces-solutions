#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    int x;
    int y[s.length()], j = 0;
    for (int i = 0; i < s.length(); i += 2)
    {
        stringstream str;
        str << s[i];x; str >> x;
        y[j] = x;
        j++;
    }
    for (int i = 0; i < j; i++)
    {
        for (int k = i; k >= 1; k--)
        {
            if (y[k] < y[k - 1])
            {
                swap(y[k], y[k - 1]);
            }
        }
    }
    for ( int i = 0; i < j; i++)
    {
        cout<<y[i];
       if (i != j - 1)
       {
           cout<<"+";
       }
    }
}