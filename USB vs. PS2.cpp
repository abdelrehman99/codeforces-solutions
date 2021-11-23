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
    ll usb, ps, hyb, u = 0, p = 0, c = 0, n = 0;
    cin >> usb >> ps >> hyb;
    ll m;
    cin >> m;
    vl vu, vp;
    FOR (i, m)
    {
        ll j;
        string s;
        cin >> j >> s;
        if (s == "USB") vu.PB(j), u++;
        else vp.PB(j), p++;
    }
    //cout << u << " " << p << endl;
    vu.resize(u);
    vp.resize(p);
    sort(all(vu));
    sort(all(vp));
    u = p = 0;
    for (;;)
    {
        if (usb == 0 || u >= (ll)vu.size()) break;
        c += (vu[u]), usb--, u++, n++;
    }
    for (;;)
    {
        if (ps == 0 || p >= (ll)vp.size()) break;
        c += (vp[p]), ps--, p++, n++;
    }
    while ((u < (ll)vu.size() && hyb) || (p < (ll)vp.size() && hyb))
    {
        //cout << u << " " << vu[u] << " " << p << " " << vp[p] << " " << c << endl;
        if ((p >= (ll)vp.size() && u < (ll)vu.size()) || (u < (ll)vu.size() && p < (ll)vp.size() && vu[u] <= vp[p])) c += (vu[u]), n++, u++, hyb--;
        else if ((p < (ll)vp.size() && u < (ll)vu.size() && vu[u] >= vp[p]) || (u >= (ll)vu.size() && p < (ll)vp.size())) c += (vp[p]), n++, p++, hyb--;
        else if ((p >= (ll)vp.size() && u >= (ll)vu.size())) break;
        //hyb--;
    }
    //cout << u << " " << vu[u] << " " << p << " " << vp[p] << " " << c << endl;
    cout << n << " " << c << endl;
}




signed main(){
    fast;
    int t = 1;
    //cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}
