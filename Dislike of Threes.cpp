#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define WL(t) while(t --)
#define S second
#define PB push_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC)
#define MP make_pair
#define llu unsigned long long
typedef long long ll;typedef long double ld;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}






signed main()
{
    fast;
    //freopen("lazy.in", "r", stdin);
    int t = 1;
    vi v(100);
    for (int i = 1, j = 0; j < 100; i++, j++)
    {
        if ((i % 3 == 0) || (i % 10 == 3))continue;
        if (i != 0) v[j] = i;
    }
    //cin >> t;
    FOR(i, 100) cout << v[i] << " ";
    WL(t)
    {
        int n;
        //cin >> n;
    	//cout << v[n - 1] << endl;
    }
    return 0;
}
