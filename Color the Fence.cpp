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

bool func(pl &a, pl &b)
{
    if (a.F == b.F)
    {
        ret a.S > b.S;
    }
    ret a.F < b.F;
}


pl solve2(vpl v, ll k, ll n = 9)
{
    ll ans = 0, mx;
    FOR(i, n)
    {
        if (v[i].S > v[0].S && v[i].F <= k)
        {
            if (v[i].S > ans)
            {
                mx = v[i].F;
                ans = v[i].S;
            }
            else if (v[i].S == ans) 
            {
                mx = min(mx, v[i].F);
            }
        }
    }
    if (ans == 0) ret{-1, -1};
    ret {mx, ans};
}


void solve()
{
    ll k, n = 9;
    cin >> k;
    vpl v(n);
    FOR (i, n)
    {
        cin >> v[i].F;
        v[i].S = i + 1;
    }
    sort(all(v), func);
    if (v[0].F > k)
    {
        cout << -1 << endl;
        ret;
    }
    /* FOR(i, n)
    {
        cout << v[i].F << " " << v[i].S << endl;
    } */
    deque <ll> dq;
    while (k - v[0].F >= 0)
    {
        dq.PB(v[0].S);
        k -= v[0].F;
    }
    while (k > 0)
    {
        pl x = solve2(v, v[0].F + k);
        if (x.F == -1)
        {
            break;
        }
        dq.push_front(x.S);
        //cout << x.S << endl;
        k -= (x.F - v[0].F);
        dq.pop_back();
    }
    sort(all(dq), greater <ll> ());
    for (auto &i : dq)
    {
        cout << i;
    }
    cout << endl;
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
