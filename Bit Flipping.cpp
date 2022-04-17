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
    ll n, k;
    cin >> n >> k;
    vl v(n, 0);
    ll first = -1;
    string s;
    cin >> s;
    if (k == 0)
    {
        cout << s << endl;
        FOR (i, n) cout << 0 << ' ';
        cout << endl;
        ret;
    }
    FOR (i, n)
    {
        if (s[i] == '1')
        {
            first = i;
            break;
        }
    }
    if (k % 2)
    {
        if (first == -1) first = n - 1;
        v[first]++;
        FOR (i, n)
        {
            if (i == first) continue;
            s[i] = (s[i] == '1' ? '0' : '1');
        }
        k--;
    }
    if (k > 0)
    {
        for (ll i = 0; i < n;)
        {
            if (s[i] == '0')
            {
                ll j = i;
                i++;
                while (i < n && s[i] == '1') i++;
                if (i == n)
                {
                    if (j == n - 1) break;
                    swap(s[j], s[n - 1]);
                    k -= 2;
                    v[j]++, v[n - 1]++;
                    break;
                }
                //cout << i << " " << j << endl;
                s[i] = s[j] = '1';
                v[i]++, v[j]++;
                k -= 2;
                if (k <= 0) break;
                i++;
            }
            else i++;
        }
    }
    if (k > 0) v[0] += k;
    cout << s << endl;
    FOR (i, n) cout << v[i] << " ";
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
