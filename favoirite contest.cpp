#include <iostream>
using namespace std;
int main ()
{
    int n, res = 0, m = 0, a = 0;
    cin>>n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
        a = 0;
        m = 0;
        for (int j = 0; j < i; j++)
        {
            if (x[i] > x[j])
            {
                m++;
            }
            else if (x[i] < x[j])
            {
                a++;
            }
        }
        if (max(m, a) == i && i != 0)
        {
            res++;
        }
    }
    cout<<res;
}