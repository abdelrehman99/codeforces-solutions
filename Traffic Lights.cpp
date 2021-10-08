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


ll upp (vl v, ll x)
{
    ll l = 0, r = v.size(), mid = (l + r) / 2, d;
    while (l <= r)
    {
        mid = ((l + r) % 2 == 0 ? (l + r) : (l + r) + 1) / 2; 
        if (v[mid] > x) d = v[mid], r = mid - 1;
        else l = mid + 1;
    }
    return d; 
}

ll low (vl v, ll x)
{
    ll l = 0, r = v.size(), mid, d;
    while (l <= r)
    {
        mid = ((l + r) % 2 == 0 ? (l + r) : (l + r) + 1) / 2; 
        if (v[mid] < x) d = v[mid], l = mid + 1;
        else r = mid - 1;
    }
    return d; 
}

void solve()
{ 
    ll x, n, c;
    cin >> x >> n;
    multiset <ll> m;
    set <ll> v2;
    //vl v(n);
    //priority_queue <ll> p1, p2;
    v2.insert(x);
    m.insert(x);
    v2.insert(0);
    FOR (i, n) 
    {
        cin >> c;
        auto it1 = v2.upper_bound(c), it2 = it1; --it2;
        m.erase(m.find(*it1-*it2));
        m.insert(c-*it2); m.insert(*it1-c);
        v2.insert(c);
        auto ans = m.end(); --ans;
		cout << *ans << " ";
    }
}




signed main(){
    fast;
    int t = 1;
    //cin >> t;
    WL(t){
    	solve();
        runtime();
    }
    return 0;
}
