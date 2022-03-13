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

vl notprimes, primes;
map <string, bool> mp;
bool sei[M + 10];

void seive()
{
    for (ll i = 2; i <= M; i++)
    {
        if (sei[i])
            continue;
        primes.PB(i);
        mp[to_string(i)] = 1;
        for (ll j = 2 * i; j <= M; j += i)
        {
            sei[j] = 1;
        }
    }
}

void solve()
{
    ll k;
    cin >> k;
    string s;
    cin >> s;
    sei[1] = 1;
    FOR (i, s.size())
    {
        ll x = s[i] - '0';
        if ((sei[x]))
        {
            cout << 1 << endl;
            cout << x << endl;
            return;
        }
    }
    for (ll i = 0; i < s.size() - 1; i++)
    {
        for (ll j = i + 1; j < s.size(); j++)
        {
            string t;
            t.PB(s[i]);
            t.PB(s[j]);
            ll x = stol(t);
            if ((sei[x]))
            {
                cout << 2 << endl;
                cout << x << endl;
                return;
            }
        }
    }
    cout << s.size() << endl;
    cout << s << endl;
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    seive();
    WL(t)
    {
        solve();
    }
    runtime();
    return 0;
}