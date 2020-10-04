#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double x[n], res = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
        x[i] = x[i] / 100;
        res += x[i];
    }
    cout<<(res / n) * 100;
}

