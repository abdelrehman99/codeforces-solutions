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
    llu a, b;
    cin >> a >> b;
    vl v;
    llu x = 2, sum = 1;
    while (true)
    {
        sum += x;
        for (ll i = 1; i < x; i *= 2)
        {
            v.PB(sum - i);
        }
        if (sum - x > b) break; 
        x *= 2;
    }
    sort(all(v));
    /* for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl; */
    auto it2 = lower_bound(all(v), b);
    if (*it2 > b) it2--;
    auto it1 = lower_bound(all(v), a);
    if (*it1 >= a) it1--;
    //cout << *it2 << " " << *it1 << endl; 
    cout << it2 - it1 << endl;
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
