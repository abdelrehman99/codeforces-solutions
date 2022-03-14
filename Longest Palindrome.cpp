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
    ll n, m, c = 0, b = 0;
    cin >> n >> m;
    vector <string> v(n);
    map<string, ll> mp, mp2;
    deque <string> dq;
    string t;
    FOR (i, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    FOR (i, n)
    {
        string s = v[i];
        reverse(all(s));
        if (s == v[i]) continue; 
        if (mp[s] > 0 && (mp2[v[i]] == 0 && mp2[s] == 0)) mp2[v[i]]++, c += (v[i].size() * 2);
    }
    FOR(i, n)
    {
        string s = v[i];
        reverse(all(s));
        if (mp2[v[i]] > 0 || mp2[s] > 0)
            continue;
        ll l = 0, r = m - 1, x = 0;
        while (l <= r)
        {
            if (v[i][l] != v[i][r])
            {
                x = 1;
                break;
            }
            l++, r--;
        }
        if (x == 0 && t.empty()) t = v[i];
        if (!t.empty()) break;
    }
    c += t.size();
    cout << c << endl;
    for (auto &i : mp2)
    {
        if (i.S > 0)
        {
            string s = i.F;
            reverse(all(s));
            dq.push_front(i.F);
            dq.push_back(s);
            b++;
        } 
    }
    if (dq.empty() && c > 0) cout << t << endl;
    while (!dq.empty())
    {
        cout << dq.front();
        b--;
        if (b == 0) cout << t;
        dq.pop_front();
    }
    //reverse(all(mp2));
    /* for (auto i = mp.rbegin(); i != mp.rend(); i--)
    {
        if ((*i).S > 0)
        {
            string s = (*i).F;
            reverse(all(s));
            cout << s;
        }
    } */
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
