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

vpl v2;

bool bs (ll f, ll s)
{
    ll l = 0, r = v2.size(), m;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        if (v2[m].F <= f && v2[m].S >= s) ret true;
        else if (v2[m].F > f) r = m - 1;
        else l = m + 1;
    }
    ret false;
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    vl v(n);
    cin(v, n);
    for (ll i = 0; i < n;)
    {
        if (v[i] >= v[i + 1])
        {
            ll j = i;
            while (v[i] >= v[i + 1]) i++;
            v2.PB({j, i});
        }
        else if (v[i] <= v[i + 1])
        {
            ll j = i;
            while (v[i] <= v[i + 1]) i++;
            v2.PB({j, i});
        }
    }
    //for (auto &i : v2) cout << i.F << " " << i.S << endl;
    while (q--)
    {
        ll f, s;
        cin >> f >> s;
        cout << (bs(f - 1, s - 1) || (f == s) ? "YES" : "NO") << endl;
    }
}

signed main()
{
    fast;
    int t = 1;
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}
