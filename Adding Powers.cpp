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

bool check (vl &v2, ll n)
{
    auto it = lower_bound(all(v2), n);
    if (it == v2.end()) it--;
    vector <vl :: iterator> v;
    while (it >= v2.begin())
    {
        if (*it > n)
        {
            it--;
            continue;
        } 
        n -= (*it);
        v.PB(it);
        it--;
    }
    if (n == 0)
    {
        for (auto &i : v)
        {
            v2.erase(i);
        }
        ret true;
    }
    ret false;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vl v(n);
    cin (v, n);
    ll mx = *max_element(all(v));
    ll x = 1;
    vl v2, v3;
    while (x <= mx)
    {
        v2.PB(x);
        x *= k;
    }
    FOR (i, n)
    {
        if (v[i] == 0) continue;
        if (binary_search(all(v2), v[i]))
        {
            v2.erase(lower_bound(all(v2), v[i]));
        }
        else 
        {
            if (!check(v2, v[i]))
            {
                cout << "NO" << endl;
                ret;
            }
        }
    }
    cout << "YES" << endl;
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
