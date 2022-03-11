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

void solve()
{
    ll n;
    cin >> n;
    string s = "21";
    if (n == 2)
    {
        cout << 2 << endl;
        return;
    }
    if (n % 3 == 2) s = "12";
    if (n % 3 != 0) cout << n%3;
    //cout << (n % 3 == 0 ? : n % 3);
    for (ll k = 0; k < (n / 3); k++)
    {
        cout << s;
    }
    /* else 
    {
        cout 
    }
    if (n % 2 && n != 1) j[0] = 2, j[1] =  1;
    vl v;
    while (n > 0)
    {
        v.PB(j[i]);
        n -= j[i];
        i++;
        i %= 2;
    }
    ll sum = 0;
    cout << 1;
    for (auto &c : v)
    {
        sum += c;
        if (c > nn || (n % 2 && sum == n - 1))
        {
            break;
        }
        cout << c;
    } */
    cout << endl;
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
