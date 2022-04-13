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

vector <bool> dp;

/* bool rec (ll i)
{
    if (i >= n) ret (i == n);
    if (dp[i] != -1) ret dp[i];
    //if (i + a <= n) dp[i][0] = rec(i + )
} */


void solve()
{
    ll n, a, b;
    cin >> a >> b >> n;
    if (n % a == 0 || n % b == 0 || n % a == b || n % b == a || n % (a + b) == a || n % (a + b) == b || n % (a + b) == 0)
    {
        cout << "YES" << endl;
        ret;
    }
    if (n < min(a, b))
    {
        cout << "NO" << endl;
        ret;
    }
    //dp.assign(n + a + b, false);
    //cout << (rec(0) ? "YES" : "NO") << endl;
    //cout << n % (a + b) << endl;
    /* if (n < min(a, b)) cout << "NO" << endl;
    else
    cout << (n % a == 0 || n % b == 0 || n % a == b || n % b == a || n % (a + b) == a || n % (a + b) == b || n % (a + b) == 0 ? "YES" : "NO") << endl; */
    for (ll i = 0; i <= n; i += a)
    {
        if (b > n) continue;
        if ((n - i) % b == 0)
        {
            cout << "YES" << endl;
            ret;
        }
    }
    for (ll i = 0; i <= n; i += b)
    {
        if (a > n) continue;
        if ((n - i) % a == 0)
        {
            cout << "YES" << endl;
            ret;
        }
    }
    cout << "NO" << endl;
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
