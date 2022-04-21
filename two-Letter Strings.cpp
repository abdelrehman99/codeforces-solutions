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
    ll n, cc = 0;
    cin >> n;
    map <string, vl> mp;
    vector <string> v(n);
    FOR (i, n) 
    {
        cin >> v[i];
        mp[v[i]].PB(i);
    }
    FOR (i, n)
    {
        string s;
        s = v[i];
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (v[i][0] == c) continue;
            s[0] = c;
            //cout << s << endl;
            auto it = lower_bound(all(mp[s]), i);
            //auto it2 = upper_bound(all(mp[s]), i);
            if (it != mp[s].end())
            {
                cc += (ll)(mp[s].size()) - (ll)(it - mp[s].begin());
                //cout << c << " " << *it << endl;
            } 
            /* if (it2 != mp[s].end())
                cout << c << " " << mp[s].size() << endl; */
        }
        //cout << cc << "\n";
        s = v[i];
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (v[i][1] == c)
                continue;
            s[1] = c;
            // cout << s << endl;
            auto it = lower_bound(all(mp[s]), i);
            // auto it2 = upper_bound(all(mp[s]), i);
            if (it != mp[s].end())
            {
                cc += (ll)(mp[s].size()) - (ll)(it - mp[s].begin());
                // cout << c << " " << *it << endl;
            }
        }
        //cout << cc << endl;
    }
    cout << cc << endl;
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
