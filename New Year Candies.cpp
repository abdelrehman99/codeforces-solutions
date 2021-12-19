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
    ll n, sume = 0, sumo = 0;
    cin >> n;
    vl v(n), sumb(n), sumf(n);
    FOR (i, n)
    {
        cin >> v[i];
        if (i == 0 || i == 1) sumf[i] = v[i];
        else sumf[i] = sumf[i - 2] + v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i + 2 > n - 1) sumb[i] = v[i];
        else sumb[i] = v[i] + sumb[i + 2];
    }
    //reverse(all(sumb));
    //FOR (i, n) cout << sumf[i] << " ";
    //cout << endl;
    //FOR (i, n) cout << sumb[i] << " ";
    //cout << endl;
    ll c = 0;
    FOR (i, n)
    {
        //sumf[i - 1] + sumb[i + 2] == sumf[i - 2] + sumb[i + 3];
        ll x = 0, y = 0;
        if (i > 0)
        {
            x += sumf[i - 1];
        }
        //else x += sumb[i + 2];
        if (i < n - 2) x += sumb[i + 2];
        if (i > 1)
        {
            y += sumf[i - 2];
        }
        if (i < n - 1) y += sumb[i + 1];
        if (x == y) 
        {
            //cout << i << endl;
            c++;
        }
        //if (i % 2 == 0 && sumf[i - 1] + sumb[i + 2] == sumf[i] - v[i] + sumb[i + 1]) c++;
    }
    cout << c << endl;
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
