#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

unsigned long long a[101][101];


void C()
{
    a[1][0] = 1;
    a[1][1] = 1;
    for (int i = 2; i <= 100; i++)
    {
        a[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }      
    }
}

void solve()
{
	int n, r;
    C();
    while (cin >> n >> r && (n != 0 && r != 0))
    {
        cout << n << " things taken " << r << " at a time is " << a[n][r] << " exactly " << endl;
    }
}


signed main()
{
    fast;
    int t = 1;
    //cin >> t;
    while(t--)
    {
    	solve();
    }
    return 0;
}
