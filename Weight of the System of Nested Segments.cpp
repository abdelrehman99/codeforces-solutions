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

bool s(pl &a, pl&b)
{
    return a.S > b.S;
}
bool s2(pl &a, pl &b)
{
    return a.S < b.S;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vpl v(m);
    map <ll, ll> mp;
    FOR (i, m)
    {
        cin >> v[i].F >> v[i].S;
        mp[v[i].F] = i + 1;
    }
    sort(all(v), s2);
    vpl res(2 * n);
    ll w = 0;
    FOR (i, 2 * n) 
    {
        res[i] = {v[i].F, v[i].S};
        w += v[i].S;
        //cout << v[i].S << " ";
    }
    //cout << endl;
    sort(all(res));
    /* for (auto &i : res) cout << i.F << " ";
    cout << endl; */
    ll l = 0, r = (2 * n) - 1;
    cout << w << endl;
    while (l < r)
    {
        cout << mp[res[l++].F] << " " << mp[res[r--].F] << endl;
    }
    cout << endl;
    //l = 0, r = 0;

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
