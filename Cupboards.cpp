#include <iostream>
using namespace std;
int main()
{
    int n, x, y, l = 0, r = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        l += x;
        r += y;
    }
    cout<<min(l, n - l) + min(r, n - r);
}