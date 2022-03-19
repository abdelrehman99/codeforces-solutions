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
const ll mod = 1e9 + 7, N = 2e6 + 7, M = 1e7 + 1, INF = INT_MAX / 10;
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

vl pre, freq;
vector <bool> sei(M);

void solve()
{
    ll n, x;
    cin >> n;
    freq.resize(M, 0);
    FOR (i, n)
    {
        cin >> x;
        freq[x]++;
    }
    pre.resize(M, 0);
    for (ll i = 2; i <= M; i++)
    {
        if (sei[i])
            continue;
        // primes.PB(i);
        pre[i] += freq[i];
        for (ll j = i * 2; j <= M; j += i)
        {
            sei[j] = 1;
            pre[i] += freq[j];
        }
    }
    for (ll i = 1; i <= M; i++) pre[i] += pre[i - 1];
    /* for (ll i = 1; i <= 15; i++)
        cout << pre[i] << endl; */
    ll m;
    cin >> m;
    while (m--)
    {
        ll l, r;
        cin >> l >> r;
        cout << pre[min(M, r)] - pre[min(l - 1, M)] << endl;
    }
}

signed main()
{
    fast;
    int t = 1;
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}