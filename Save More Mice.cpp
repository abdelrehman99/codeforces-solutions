#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define cin(v) for (auto &i : v) cin >> i;
#define cout(v) for (auto &i : v) cout >> i;
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




void solve()
{ 
    ll n, k, x, d = 0;
    cin >> n >> k;
    vl v;
    map <ll, ll> v2;
    FOR (i, k)
    {
       cin >> x;
       if (v2[x] > 0) v2[x]++;
       else v.PB(x), d++, v2[x]++;
    }
    //if (s.find(0) != s.end())s.erase(s.find(0));
    //cout << s.size() << endl;
    sort(all(v));
    v.resize(d);
    //FOR (i, d) cout << v[i] << " ";
    //cout << endl;
    ll c = 0, l = -1, r = d - 1, m = 0;
    if (l == r)
    {
        cout << 1 << endl;
        return;
    }
    while (l < r)
    {
        c += (n - v[r]);
        m++;
        v2[v[r]]--;
        if (v2[v[r]] == 0) r--;
        while (l < r && c >= v[l + 1])
        {
            l++;
        } 
        //cout << l << " " << c << endl;
    }
    //cout << l << " " << r << " " << c << " ";
    cout << m << endl;
}   




signed main()
{
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
        runtime();
    }
    return 0;
}
