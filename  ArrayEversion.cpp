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
    ll n, sum = 0, mx = 0;
    cin >> n;
    vl v(n), v2(n);
    FOR (i, n)
    {
        cin >> v[i];
        //sum += v[i];
        //mx = max(v[i], mx);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > mx) mx = v[i], sum++;
    }
    cout << sum - 1 << endl;
    /*v2 = v;
    sort(all(v2), greater <ll> ());
    if (v2 == v)
    {
        cout << n - 1 << endl;
        return;
    }
    //cout << mx2 << endl;
    if (mx == n - 1) cout << 0 << endl;
    else if (mx2 >= mx) cout << 2 << endl;
    else cout << 1 << endl; */
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
