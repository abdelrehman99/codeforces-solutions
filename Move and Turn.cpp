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
    x = x, y = y;
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (1ll * x * ans);
        }
        y >>= 1;
        x = (1ll * x * x);
    }
    return ans;
}

set <pl> s;
ll n;

void check (ll i, ll x, ll y, char c)
{
    if (n == i)
    {
        s.insert({x, y});
        ret;
    }
    if (c == 'v')
    {
        check(i + 1, x, y + 1, 'h');
        check(i + 1, x, y - 1, 'h');
    }
    else 
    {
        check(i + 1, x + 1, y, 'v');
        check(i + 1, x - 1, y, 'v');
    }
}

void solve()
{
    cin >> n;
    /* if (n <= 2)
    {
        cout << 4 << endl;
        ret;
    } */
    /* check(1, 1, 0, 'v');
    check(1, -1, 0, 'v');
    check(1, 0, 1, 'h');
    check(1, 0, -1, 'h'); */
    ll b = (((n - 1) / 2) + 1) * (((n - 1) / 2) + 1);
    ll a = (((n + 1) / 2) + 1) * (((n + 1) / 2) + 1);
    cout << (n % 2 == 0 ? ((n / 2) + 1) * ((n / 2) + 1) : b + a - 1) << endl;
    //cout << s.size() << endl;
}

signed main()
{
    fast;
    int t = 1;
    //cin >> t;
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}
