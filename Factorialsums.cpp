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


vector <ll> fact;


void solve()
{
    ll n, c = 0;
    cin >> n;
    auto it = lower_bound(all(fact), n);
    if (*it == n)
        cout << 1 << endl << it - fact.begin() + 1 << endl;
    else
    {
        vl v(20, 0);
        while (n > 0)
        {
            while (it > fact.begin() && n < *it)
                it--;
            /* if (*it == n || n % (*it) == 0)
            {
                c += ((n) / (*it));
                v[it - fact.begin() + 1] += ((n) / (*it));
                break;
            } */
            ll x = n / (*it);
            c += x;
            v[it - fact.begin() + 1] += x;
            n -= ((x) * (*it));
        }
        cout << c << endl;
        // reverse(all(v));
        for (ll i = 19; i >= 1; i--)
        {
            if (v[i] == 0)
                continue;
            FOR(j, v[i])
            cout << i << " ";
        }
        cout << endl;
    }
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    llu x = 1, c = 2;
    while (c <= 19)
    {
        fact.PB(x);
        x *= c;
        c++;
    }
    //cout << fact.size() << endl;
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}
