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

void solve()
{
    ll i, j, n, time;
    cin >> n >> time;
    ll a[35], b[35];
    ll min_time = 0, max_time = 0, sum_time = 0;
    vector<ll> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        min_time += a[i];
        max_time += b[i];
        v[i] = a[i];
        sum_time += a[i];
    }
    if (min_time <= time && time <= max_time)
    {
        cout << "YES\n";
        if (sum_time < time)
        {
            for (i = 0; i < n; i++)
            {
                ll df = b[i] - a[i];
                j = 1;
                while (j <= df)
                {
                    if (sum_time == time)
                        break;
                    sum_time++;
                    v[i]++;
                    j++;
                }
            }
        }
        for (i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else
        cout << "NO\n";
}

signed main()
{
    fast;
    int t = 1;
    // cin >> t;
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}