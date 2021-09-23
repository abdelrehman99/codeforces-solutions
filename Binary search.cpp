#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
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

ll n;
vl v;

ll solve(ll l, ll r, ll t)
{
    ll mid = (l + r) / 2;
    //cout << l << " " << r << " " << mid << endl;
    if (l > r) return -1;
    else if (v[mid] == t) return mid + 1;
    else if (v[mid] > t) return solve(l, mid - 1, t);
    else return solve (mid + 1, r, t);
}




signed main(){
    fast;
    int t = 1;
    //cin >> t;
    //WL(t)
    {
        ll q;
        cin >> n;
        v.resize(n);
        FOR (i, n) cin >> v[i];
        cin >> q;
    	FOR (i, q) 
        {
            cin >> t;
            cout << solve(0, n - 1, t) << endl;
        }
        runtime();
    }
    return 0;
}