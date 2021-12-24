#include<iostream>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<limits.h>
using namespace std;
void code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
    #endif
}
 
int main()
{
    //code();
    int t, n;
    cin>>t;
    while ( t--)
    {
        cin>>n;
        int arr[n];
        for ( int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                int mx = INT_MIN;
                for (int k = j; k < j + i; k++)
                {
                    mx = max(arr[k], mx);
                }
                cout << mx << " ";
            }
        }
        cout << endl;
        cout << INT_MIN << endl;
    }
    return 0;
}