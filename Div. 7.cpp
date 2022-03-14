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

vector <string> v;

void solve()
{
    string n;
    cin >> n;
    ll mn = INT_MAX;
    string mnv;
    for (auto i : v)
    {
        if (i.size() != n.size()) continue;
        ll c = 0;
        for (ll j = 0; j < min(i.size(), n.size()); j++)
        {
            if (i[j] != n[j]) c++;
        }
        c += abs((ll)i.size() - (ll)n.size());
        if (c < mn) mn = c, mnv = i;
        mn = min(c, mn);
    }
    cout << mnv << endl;
}

signed main()
{
    fast;
    int t = 1;
    for (ll i = 1; i <= 1000; i++)
    {
        v.PB(to_string(7 * i));
    }
    cin >> t;
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}
