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

bool srt(pair<pl, bool> &a, pair<pl, bool> &b)
{
    if (a.F.S - a.F.F == b.F.S - b.F.F)
    {
        if (a.S == true)
            ret a.F.S - a.F.F > b.F.S - b.F.F;
        else
            ret a.F.S - a.F.F < b.F.S - b.F.F;
    }
    ret a.F.S - a.F.F < b.F.S - b.F.F;
}

/* ll bs (vpl &v, pl &x)
{
    ll l = 0, r = v.size() - 1, m;
    while (l < r)
    {
        m = l + (r - l) / 2;
    }
} */


void solve()
{
    ll n;
    cin >> n;
    string s, s2;
    cin >> s;
    s2 = s;
    ll c = 1, res = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            if (c % 2)
            {
                s[i + 1] = s[i];
                res++;
                c = 0;
            }
            else c = 1;
        }
        else 
        {
            c++;
        }
    }
    /* vector <pair <pl, bool> > v;
    ll seg = 0;
    set <pl> one, zero;
    for (ll i = 0; i < n;)
    {
        ll j = i, b = 0;
        while (s2[i] == s2[j])
        {
            j++;
            b++;
        }
        if (s2[i] == '1') one.insert({i, j - 1});
        else zero.insert({i, j - 1});
        seg++;
        v.PB({{i, j - 1}, (j - 1 == n - 1 || i == 0 ? false : true)});
        i = j;
    }
    c = res;
    sort(all(v), srt);
    //cout << seg << endl;
    for (auto &i : v)
    {
        cout << i.F.F << " " << i.S << endl;
        if (i.F.S - i.F.F + 1 <= c)
        {
            if (s2[i.F.F] == '1')
            {
                pl x = {i.F}, before, after;
                auto it = lower_bound(all(zero), x);
                auto it2 = lower_bound(all(zero), x);
                if (it != zero.end()) after = *it;
                else after = {0, 0};
                if (it2 != zero.begin())
                {
                    it2--;
                    before = *it2;
                }
                else
                    before = {0, 0};
                if ((after.S - after.F + 1) + (before.S - before.F + 1) + (i.F.S - i.F.F + 1) % 2) 
                {
                    continue;
                }
                else 
                {
                    zero.erase(it);
                    zero.erase(it2);
                    zero.insert({before.F, after.S});
                }
            }
            else 
            {
                pl x = {i.F}, before, after;
                auto it = lower_bound(all(one), x);
                auto it2 = lower_bound(all(one), x);
                if (it != one.end())
                    after = *it;
                else
                    after = {0, 0};
                if (it2 != one.begin())
                {
                    it2--;
                    before = *it2;
                }
                else
                    before = {0, 0};
                cout << before.F << " " << before.S << " ";
                cout << after.F << " " << after.S << endl;
                if (before.F - after.S + 1 % 2)
                {
                    continue;
                }
                else
                {
                    one.erase(it);
                    one.erase(it2);
                    one.insert({before.F, after.S});
                }
            }
            if (i.S)
                seg -= 2;
            else
                seg--;
            c -= (i.F.S - i.F.F + 1);
        }
        else break;
    }
    //cout << s << "\n"; */
    cout << res << endl;
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
