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
    string s, s2;
    cin >> s;
    if ((s.find('2') == string ::npos) || s.find('0') == string ::npos)
    {
        sort(all(s));
        cout << s << endl;
        return;
    }
    ll n = s.size(), c = 0;
    vl v, v2;
    FOR (i, n)
    {
        if (s[i] != '1')
        {
            s2.PB(s[i]);
        }
        else c++;
    }
    for (auto i : s2)
    {
        if (i == '2')
        {
            while (c > 0)
            {
                cout << '1';
                c--;
            }
            cout << i;
            continue;
        }
        cout << i;
    }
}

signed main()
{
    fast;
    int t = 1;
    // cin >> t;
    WL(t)
    {
        solve();
    }
    // runtime();
    return 0;
}
