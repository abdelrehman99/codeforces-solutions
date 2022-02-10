#include <bits/stdc++.h>
using namespace std;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define F first
#define FOR(i, n) for (int i = 0; i < (int)n; i++)
#define cin(v)        \
    for (auto &i : v) \
        cin >> i;
#define cout(v)       \
    for (auto &i : v) \
        cout >> i;
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

void solve()
{
    ll n;
    cin >> n;
    vl vis(n, -1);
    vector<bool> vg(n);
    FOR(i, n)
    {
        ll k;
        cin >> k;
        vl v2(k);
        bool flag = true;
        FOR(j, k)
        {
            cin >> v2[j];
            v2[j]--;
            if (!vg[v2[j]] && flag)
                vis[i] = v2[j], vg[v2[j]] = 1, flag = 0;
        }
    }
    FOR(i, n)
    {
        if (vis[i] == -1)
        {
            FOR(j, n)
            {
                if (!vg[j])
                {
                    cout << "IMPROVE" << endl;
                    cout << i + 1 << " " << j + 1 << endl;
                    return;
                }
            }
        }
    }
    cout << "OPTIMAL" << endl;
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
