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

bool se(string &s, string &s2)
{
    ret(s.size() != s2.size() ? (s.size() < s2.size()) : s < s2);
}

/* bool se2 (string &s, string &s2)
{
    ret (s ;
} */

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    set<string> se;
    for (int i = 0; i < n; i++)
    {
        string ss;
        for (int k = 0; k < 5 && i + k < n; k++)
        {
            ss.push_back(s[i + k]);
            se.insert(ss);
        }
    }
    for (int i = 1; i < 6; i++)
    {
        string t(i, 'a');
        while (true)
        {
            if (se.count(t) == 0)
            {
                cout << t << '\n';
                return;
            }
            int idx = i - 1;
            while (idx >= 0 && t[idx] == 'z')
            {
                t[idx] = 'a';
                idx--;
            }
            if (idx < 0)
                break;
            t[idx]++;
        }
    }
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