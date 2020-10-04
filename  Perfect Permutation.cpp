#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout<<i<<" "<<i - 1<<" ";
            }
        }
    } else
    {
        cout<<"-1";
    }
}

