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
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    /*if (x == 1 && a - n <= 1)
    {
        cout << max(b - (n - a), y) << endl;
        return;
    }
    if (y == 1 && y - n <= 1)
    {
        cout << a << endl;
        return;
    } */
    ll mn = INT_MAX;
    //if (a > b) swap(a, b), swap(x, y);
    if (a - x < n)
    {
        mn = x * (max(b - (n - (a - x)), y));
        //mn = 
    }
    else mn = (a - n) * (b);
    if (b - y < n)
    {
        mn = min(y * (max(a - (n - (b - y)), x)), mn);
        //mn = 
    }
    else mn = min((b - n) * (a), mn); 
    cout << mn << endl;
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
