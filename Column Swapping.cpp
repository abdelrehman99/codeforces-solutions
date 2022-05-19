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
    ll n, m;
    cin >> n >> m;
    vvl v, v2;
    v.resize(n, vl (m));
    v2.resize(n, vl(m));
    FOR (i, n)
    {
        FOR (j, m) cin >> v[i][j];
    }
    v2 = v;
    FOR(i, n) sort(all(v2[i]));
    set <ll> st;
    FOR (i, m)
    {
        ll c = 0;
        FOR (j, n)
        {
            if (v[j][i] != v2[j][i]) 
            {
                //cout << v[j][i] << " " << v2[j][i] << endl;
                c++;
            }
        }
        if (c != 0) st.insert(i);
    }
    if (st.size() > 2)
    {
        cout << -1 << endl;
        ret;
    } 
    if (st.empty()) 
    {
        cout << "1 1" << endl;
        ret;
    }
    ll col1 = *st.begin(), col2 = *(st.rbegin());
    //cout << col1 << " " << col2 << endl;
    FOR (i, n) swap(v[i][col1], v[i][col2]);
    FOR(i, n)
    {
        if (v2[i] != v[i]) 
        {
            cout << -1 << endl;
            ret;
        }
    }
    for (auto &i : st) cout << i + 1 << " ";
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
