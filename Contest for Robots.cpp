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
    ll n;
    cin >> n;
    vl v(n), v2(n);
    FOR (i, n) cin >> v[i];
    FOR (i, n) cin >> v2[i];
    ll c1 = 0, c2 = 0;
    FOR (i, n)
    {
        if (v[i] == 1 && v2[i] == 0) c1++;
        else if (v2[i] == 1 && v[i] == 0) c2++;
    }
    //cout << c1 << endl;
    if (c1 == 0) 
    {
        cout << -1 << endl;
    }
    else if (c1 > c2) cout << 1 << endl;
    else cout << ((c2 + 1) % c1 == 0 ? (c2 + 1) / c1 : ((c2 + 1) / c1) + 1);
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
