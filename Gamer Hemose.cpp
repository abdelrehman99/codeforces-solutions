#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define F first
#define FOR(i, n) for (int i = 0; i < (int)n; i++)
#define cin(v, n)                    \
    for (int i = 0; i < (int)n; i++) \
        cin >> v[i];
#define cout(v, n)                   \
    for (int i = 0; i < (int)n; i++) \
        cout << v[i] << (i == n - 1 ? "\n" : " ");
#define WL(t) while (t--)
#define S second
#define PB push_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;
#define MP make_pair
#define llu unsigned long long
#define ret return
#define endl "\n"
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const ll mod = 1e9 + 7, N = 2e6 + 7, M = 2e6 + 7, INF = INT_MAX / 10;
ll powe(ll x, ll y)
{
    x = x % mod, y = y % (mod - 1);
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (1ll * x * ans) % mod;
        }
        y >>= 1;
        x = (1ll * x * x) % mod;
    }
    return ans;
}

ll h;

ll bs (ll x, ll y)
{
    ll l = 1, r = 1000000000, m, res, ans = 1;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        res = (m % 2 ? (((m / 2) + 1) * x) + ((m / 2) * y) : ((m / 2) * x) + ((m / 2) * y));
        //cout << m << " " << res << endl;
        if (res >= h) r = m - 1, ans = m;
        else l = m + 1;
    }
    ret ans; 
}

void solve()
{
    ll n;
    cin >> n >> h;
    vl v(n);
    cin(v, n);
    sort(all(v));
    cout << bs(v[n - 1], v[n - 2]) << endl;
}
signed main()
{
    fast;
    int t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }
    runtime();
    return 0;
}
