#include <iostream>
using namespace std;
int main()
{
    int n, m, prime = 0, counter = 0;
    cin>>n>>m;
    for (int i = n + 1;; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                counter++;
            }
            if (counter == i - 2)
            {
                prime = i;
            }
        }
        if (prime != 0)
        {
            break;
        }
    }
    if (prime == m)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}