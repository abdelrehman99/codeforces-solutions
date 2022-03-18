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
    ll n, k1, k2;
    cin >> n >> k1;
    deque <ll> v, v2;
    FOR (i, k1)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    cin >> k2;
    FOR(i, k2)
    {
        ll x;
        cin >> x;
        v2.push_back(x);
    }
    FOR (i, 1e6)
    {
        if (v.empty())
        {
            cout << i << " " << 2 << endl;
            ret;
        }
        if (v2.empty())
        {
            cout << i << " " << 1 << endl;
            ret;
        }
        //cout << v.front() << " " << v2.front() << endl;
        if (v.front() > v2.front()) v.PB(v2.front()), v.PB(v.front()), v.pop_front(), v2.pop_front();
        else  v2.PB(v.front()), v2.PB(v2.front()), v.pop_front(), v2.pop_front();
    }
    cout << -1 << endl;
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
