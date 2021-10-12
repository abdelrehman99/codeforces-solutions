#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(ll i = 0; i < (int) n; i++)
#define cin(v) for (auto &i : v) cin >> i;
#define cout(v) for (auto &i : v) cout >> i;
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

vl v, v2, v3;

void solve()
{ 
    llu n;
    cin >> n;
    v.resize(n);
    v2.resize(n);
    v3.resize(n);
    FOR (i, n) cin >> v3[i];
    llu c = 0;
    FOR (i, n)
    {
        if (i == 0)
        {
            v[i] = v3[i];
            continue;
        }
        v[i] = max(v[i - 1], v3[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            v2[i] = v3[i];
            continue;
        }
        v2[i] = min(v2[i + 1], v3[i]);
    }
    FOR (i, n)
    {
        if (i == 0 || i == n - 1) continue;
        //cout << i << " " << v3[i] << " " << v[i] << " " << v2[i] << endl;
        if (v3[i] >= v[i] && v3[i] <= v2[i]) c++;
    }
    cout << c << endl;
}




signed main()
{
    fast;
    int t = 1;
    cin >> t;
    WL(t)
    {
    	solve();
        runtime();
    }
    return 0;
}
