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
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;
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
    ll n, k, l = 0, r = 0, sum = 0;
    cin >> n >> k;
    vl vn, vp;
    FOR (i, n)
    {
        ll x;
        cin >> x;
        if (x < 0) vn.PB(abs(x)), l++;
        else vp.PB(x), r++;
    }
    vn.resize(l + 1), vp.resize(r + 1);
    sort(all(vn)), sort(all(vp));
    ll mx = max(vn.back(), vp.back());
    bool flag = true;
    //cout << mx << endl;
    //l--, r--;
    while (l >= 0 || r >= 0)
    {
        if (l >= 0)
        {
            if (flag && vn[l] == mx) sum += mx, flag = false;
            else sum += (2 * vn[l]);
            l -= k;
        }
        if (r >= 0)
        {
            if (flag && vp[r] == mx) sum += mx, flag = false;
            else sum += (2 * vp[r]);
            r -= k;
        }
    }
    cout << sum << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}
