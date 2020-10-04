#include <iostream>
using namespace std;
int main()
{
    string s, a;
    cin>>s>>a;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != a[i])
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
}