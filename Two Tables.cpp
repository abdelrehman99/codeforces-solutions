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

void solve()
{
    int W, H;
    cin >> W >> H;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int w, h;
    cin >> w >> h;

    int a = x1;
    int b = W - x2;
    int c = y1;
    int d = H - y2;

    if (c + d < h && a + b < w)
    {
        cout << -1 << endl;
        return;
    }

    int adj_hor, adj_ver;

    if (c + d >= h)
        adj_ver = min(max(0, h - d), max(0, h - c));
    else
        adj_ver = INT_MAX;

    if (a + b >= w)
        adj_hor = min(max(0, w - a), max(0, w - b));
    else
        adj_hor = INT_MAX;

    std::cout << std::fixed;
    std::cout << std::setprecision(9);

    cout << double(min(adj_hor, adj_ver)) << endl;
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

/* if ((h - y1) <= 0)
    {
        cout << 0 << endl;
        ret;
    }
    if ((y2 + (h - y1) <= H))
    {
        x = (h - y1);
    }
    if (w - x1 <= 0)
    {
        cout << 0 << endl;
        ret;
    }
    if ((x2 + (w - x1) <= W))
    {
        x = min(x, (w - x1));
    }
    cout << (x == INT_MAX ? -1 : x) << endl; */