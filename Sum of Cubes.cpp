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
typedef vector<llu>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

vl v;

bool bs(llu x)
{
    /*ll mid, l, r;
    l = 0, r = v.size() - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (v[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    mid = (l + r) / 2; */
    auto mid = lower_bound(all(v), x);
    //cout << cbrt(*(mid - 1)) << endl;
    for (llu i = 1; i <= cbrt(*(mid - 1)); i++)
    {
        if (binary_search(all(v), x - (i * i * i))) return 1;
    }
    return 0;
    //return binary_search(v.begin(), mid, x - *(mid - 1));
}

void solve()
{ 
    ll x;
    cin >> x;
    cout << (bs(x) ? "YES" : "NO") << endl;
}




signed main(){
    fast;
    for (llu i = 1; i <= 100001; i++)
    {
        v.PB(i * i * i);
    }
    //sort(all(v));
    //cout << "x" << endl;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}
