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

void tobin(string &s, ll n)
{
    //string s;
    ll i = 30;
    while (n > 0)
    {
        s[i--] = ((n % 2) + '0');
        n /= 2;
    }
    //reverse(all(s));
    //ret s;
}

void solve()
{
    ll n, k, sum = 0;
    cin >> n >> k;
    vector <string> v(n, string (31, '0'));
    FOR (i, n)
    {
        ll x;
        cin >> x;
        tobin(v[i], x);
    }
    //FOR (i, n) cout << v[i] << endl;
    for (ll i = 0, g = 30; i < 32; i++, g--)
    {
        ll c = 0;
        FOR (j, n)
        {
            if (v[j][i] == '0') c++;
        }
        //cout << g << ' ' << c << " " << endl;
        if (c <= k) k -= c, sum += (pow(2, g));
        //if (k == 0) break;
    }
    cout << sum << endl;
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
