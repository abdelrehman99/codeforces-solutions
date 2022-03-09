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

bool s(pl &a, pl &b)
{
    return a.S > b.S;
}

void solve()
{
    ll n;
    cin >> n;
    vl div;
    map<ll, ll> mp;
    while (n % 2 == 0) n /= 2, mp[2]++;
    for (ll i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    // n is a prime number greater than 2
    if (n > 2)
    {
        mp[n]++;
    }
    ll mx = 0, mxi;
    //sort(all(mp));
    for (auto &i : mp)
    {
        if (i.S > mx) mxi = i.F, mx = i.S;
    }
    ll c = mxi;
    for (auto &i : mp)
    {
        if (i.F != mxi) c *= (pow(i.F, i.S));
    }
    cout << mx << endl;
    mx--;
    while (mx--)
    {
        cout << mxi << " ";
    }
    cout << c << endl;
    // cout << endl;
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}
