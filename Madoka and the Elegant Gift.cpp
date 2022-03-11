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

ll n, m;
vector < string > v;
vector < vector <bool> > vis;

pair <pair <ll, ll>, pair <ll, ll> > add(ll i, ll j)
{
    bool f = 1;
    vis[i][j] = 1;
    //while (j > 0 && v[i][j - 1] != 1) j--;
    ll j1 = j, i1 = i;
    while (j < m - 1 && v[i][j + 1] == '1') j++, vis[i][j] = 1;
    while (i < n && f)
    {
        //cout << j1 << " " << j << endl;
        for (ll j2 = j1; j2 <= j; j2++)
        {
            if (v[i][j2] == '0') 
            {
                f = 0;
                break;
            }
        }
        //cout << i << " " << f << endl;
        if (!f) 
        {
            i--;
            break;
        }
        for (ll j2 = j1; j2 <= j; j2++) vis[i][j2] = 1;
        i++;
    }
    //cout << vis[2][2] << endl;
    if (i == n) i--;
    //cout << i1 << " " << i << " " << j1 << " " << j << endl;
    return {{i1, i}, {j1, j}};
}

bool check(pair<pair<ll, ll>, pair<ll, ll>> p)
{
    ll i1 = p.F.F, i2 = p.F.S, j1 = p.S.F, j2 = p.S.S;
    //if ((i2 - i1) + (j2 - j1) == 0) return false;
    if (i1 > 0)
    {
        for (ll j = p.S.F; j <= p.S.S; j++)
        {
            if (v[i1 - 1][j] == '1') return false;
        }
    }
    if (i2 < n - 1)
    {
        for (ll j = p.S.F; j <= p.S.S; j++)
        {
            if (v[i2 + 1][j] == '1')
                return false;
        }
    }
    if (j1 > 0)
    {
        for (ll i = i1; i <= i2; i++)
        {
            if (v[i][j1 - 1] == '1')
                return false;
        }
    }
    if (j2 < m - 1)
    {
        for (ll i = i1; i <= i2; i++)
        {
            //cout << i << " " << v[i][j2 + 1] << endl;
            if (v[i][j2 + 1] == '1')
                return false;
        }
    }
    return true;
}

void solve()
{
    cin >> n >> m;
    v.resize(n);
    vis.assign(n, vector <bool> (m, 0));
    FOR (i, n)
    {
        cin >> v[i];
    }
    /* FOR (i, n)
    {
        FOR (j, m) cout << v[i][j];
        cout << endl;
    } */
    //bool f = 0;
    FOR (i, n)
    {
        FOR (j, m)
        {
            if (v[i][j] == '1')
            {
                ll c = 0, d = 0;
                if ((i > 0 && v[i - 1][j] == '0')) c++;
                else if (i == 0) d++;
                if(i < n - 1 && v[i + 1][j] == '0') c++;
                else if (i == n - 1) d++;
                if(j > 0 && v[i][j - 1] == '0') c++;
                else if(j == 0) d++;
                if (j < m - 1 && v[i][j + 1] == '0') c++;
                else if (j == m - 1) d++;
                if(c == 4 - d) continue;
                //cout << i << " " << j << endl;
                if (!vis[i][j])
                {
                    //cout << i << " " << j << endl;
                    if (!check(add(i, j)))
                    {
                        cout << "NO" << endl;
                        return;
                    }
                    // cout << "YES" << endl;
                    //FOR (k, n) v[k].clear();
                }
            }
        }
    }
    cout << "YES" << endl;
    //FOR(i, n) v[i].clear();
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
