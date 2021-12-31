#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define cin(v) for (auto &i : v) cin >> i;
#define cout(v) for (auto &i : v) cout >> i;
#define WL(t) while(t --)
#define S second
#define PB push_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;
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

ll bs(vl &v, ll r, ll n)
{
    ll l = 0, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (v[mid] == n) return mid;
        else if (v[mid] > n) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}


void solve()
{ 
    ll n, sum = 0;
    cin >> n;
    n += 2;
    vl v(n), pref(n);
    FOR (i, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(all(v));
    ll x = bs(v, n - 1, (ll)(sum - v[n - 1] - v[n - 1]));
    if (x != -1 && x != n - 1)
    {
        for (ll j = 0; j < n - 1; j++)
        {
            if (j != x) cout << v[j] << " ";
        }
        cout << endl;
        return;
    }
    x = bs(v, n - 1, (ll)(sum - v[n - 2] - v[n - 2]));
    if (x != -1 && x != n - 2)
    {
        for (ll j = 0; j < n - 2; j++)
        {
            if (j != x) cout << v[j] << " ";
        }
        cout << endl;
    }
    else cout << -1 << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}
