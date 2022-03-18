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

bool dig(ll x)
{
    
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector <string> v(n);
    string x = "1";
    ll c = 0;
    bool f = 0;
    FOR (i, n)
    {
        cin >> v[i];
        if (v[i] == "0" || f)
        {
            f = 1;
            continue;
        }
        string s;
        ll k;
        for (k = v[i].size() - 1; k >= 0; k--)
        {
            if (v[i][k] == '0')
            {
                c++;
                continue;
            } 
            break;
        }
        FOR (j, k + 1)
        {
            s.PB(v[i][j]);
        }
        if (s != "1") x = s;
    }
    if (f)
    {
        cout << 0 << endl;
        return;
    }
    cout << x;
    while (c > 0)
    {
        cout << 0;
        c--;
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
