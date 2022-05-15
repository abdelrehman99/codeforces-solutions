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
    ll n, k;
    cin >> n >> k;
    vl v(n);
    cin (v, n);
    /* if (k == 1)
    {
        cout << *min_element(all(v)) << " " << *max_element(all(v)) << endl;
        ret; 
    } */
    map<ll, ll> mp;
    ll l, r;
    vl v2;
    FOR (i, n)
    {
        mp[v[i]]++;
    }
    for (auto &i : mp)
    {
        if (i.S >= k) v2.PB(i.F);
    }
    if (v2.empty())
    {
        cout << -1 << endl;
        ret;
    }
    v2.resize(v2.size());
    ll mx = INT_MIN, p = v2[0];
    for (ll i = 0; i < v2.size();)
    {
        //cout << v2[i] << " ";
        p = v2[i];
        while (i < v2.size() - 1 && v2[i] + 1 == v2[i + 1]) i++;
        if (v2[i] - p > mx)
        {
            //cout << p << " " << v2[i] << endl;
            l = p;
            r = v2[i];
            mx = v2[i] - p;
            p = v2[i + 1];
        }
        else i++;
    }
    /* if (v2[v2.size() - 1] - 1 == v2[v2.size() - 2])
    {
        if (v2.back() - p > mx)
        {
            //cout << p << " " << v2.back() << endl;
            l = p;
            r = v2.back();
            mx = v2.back() - p;
        }
    } */
    //cout << endl;
    cout << l << " " << r << endl;
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
