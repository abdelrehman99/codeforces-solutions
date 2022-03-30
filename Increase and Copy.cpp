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

vl v;

void solve()
{
    ll n, mn = INT_MAX;
    cin >> n;
    //cout << lower_bound(all(v), n) - v.begin() << endl;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        ll div = (n % i ? (n / i) + 1 : (n / i));
        mn = min(mn, (i - 1) + div -1 );
    }
    cout << (mn == INT_MAX ? n - 1 : mn) << endl;
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    /* ll n = 1, sum = 3;
    v.PB(1);
    v.PB(2);
    while (sum <= 1e9)
    {
        sum++;
        v.PB(sum);
        //n++;
        sum += (2);
        v.PB(sum);
    }
    for (auto &i : v) cout << i << endl; */
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}
