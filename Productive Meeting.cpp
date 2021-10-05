#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define cin(v) for (auto i : v) cin >> i 
#define WL(t) while(t --)
#define S second
#define PB push_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC)
#define MP make_pair
#define llu unsigned long long
typedef long long ll;typedef long double ld;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

void solve ()
{
    int n, q, t = 0;
    priority_queue < pair <int, int> > s;
    cin >> n;
    vpii v;
    FOR (i, n)
    {
        cin >> q;
        s.push({q, i + 1});
    }
    /*cout << s.top().F << " " << s.top().S << endl;
    s.pop();
    cout << s.top().F << " " << s.top().S << endl;
    while (!s.empty())
    {
        int top1 = s.top().F, top11 = s.top().S;
        cout << top1 << " " << top11 << endl;
        s.pop();
        //int top2 = s.top().F, top22 = s.top().S;
        //cout << top2 << " " << top22 << endl;
    } */
    while (s.top().F != 0)
    {
        if (s.top().F <= 0) break;
        int top1 = s.top().S;
        int top11 = s.top().F - 1;
        s.pop();
        if (s.top().F <= 0) break;
        int top2 = s.top().S;
        int top22 = s.top().F - 1;
        s.pop();
        v.PB({top1, top2});
        //cout << top11 << " " << top22 << endl;
        t++;
        s.push({top22, top2});
        s.push({top11, top1});
    } 
    cout << t << endl;
    for (auto &i : v) cout << i.F << " " << i.S << endl;
}


signed main()
{
    fast;
    int t = 1;
    cin >> t;
    WL(t)
    {
        //int n, m;
        solve();
    }
    return 0;
}