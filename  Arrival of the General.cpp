#include <iostream>
using namespace std;
int main()
{
    int n, max = 0, min = 0, moves = 0;
    cin>>n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (x[max] < x[i + 1])
        {
            max = i + 1;
        }
    }
    for (int i = max; i > 0; i--)
    {
        swap(x[i], x[i - 1]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (x[min] >= x[i + 1])
        {
            min = i + 1;
        }
    }
    moves = max + (n - 1 - min);
    cout<<moves;
}