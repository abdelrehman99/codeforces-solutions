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
    ll n, q;
    cin >> n >> q;
    vl v(n);
    cin (v, n);
    bool flag = false;
    ll sum = 0;
    FOR (i, n) sum += v[i];
    //cout << sum << endl;
    ll temp = 0;
    set <ll>  s;
    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            ll i, a;
            cin >> i >> a;
            if (flag)
            {
                if (s.find(i - 1) != s.end())
                {
                    sum -= v[i - 1];
                }
                else sum -= temp, s.insert(i - 1);
                //if (s.size() == n) flag = false;
            }
            else sum -= v[i - 1];
            sum += a;
            v[i - 1] = a;
        }
        else 
        {
            ll a;
            cin >> a;
            temp = a;
            sum = (a * n);
            s.clear();
            flag = true;
        }
        cout << sum << endl;
    }
    //cout << sum << endl;
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
