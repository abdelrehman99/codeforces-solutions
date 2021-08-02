#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
int a[100005];
int dp[100005];
map<int,int> mp;

int main()
{
    int n,m;
//  int cnt = 0;
    cin>>n>>m;
    int pos;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    dp[n-1] = 1;
    mp[a[n-1]] = 1;
    for(int i = n-2;i>=0;i--) //Start from n-2, otherwise dp[n-1] = dp[n] = 0 then each result will be one less.
    {
        if(mp[a[i]] == 0)
        {

            mp[a[i]] = 1;//Mark the number that has been used 
            dp[i] = dp[i+1]+1;
        }
        else
        {
            dp[i] = dp[i+1];
        } 
    }
    for(int i = 0;i<m;i++)
    {
        cin>>pos;
        cout<<dp[pos-1]<<endl; 
    }
    return 0;

}