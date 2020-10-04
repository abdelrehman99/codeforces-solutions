#include <iostream>
using namespace std;
int main (void)
{
    int n, in = 0, min = 0, x ,y;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        in -= x;
        in += y;
        min = max(min, in);
    }
    cout<<min;
}