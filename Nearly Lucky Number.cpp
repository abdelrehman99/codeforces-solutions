#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int b = 0, c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '7' || s[i] == '4')
        {
            b++;
        }
    }
    string f = to_string(b);
    for (int i = 0; i < f.length(); i++)
    {
        if (f[i] != '7' && f[i] != '4')
        {
            c++;
            cout<<"NO";
            break;
        }
    }
    if (c == 0)
    {
        cout<<"YES";
    }
}