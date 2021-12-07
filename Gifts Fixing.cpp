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

bool fun (pair <ll, ll> &a, pl &b)
{
    return a.S < b.S;
}


void solve()
{ 
    ll n;
    cin >> n;
    vpl v(n), v2(n);
    FOR (i, n)
    {
        cin >> v[i].F;
    }
    FOR (i, n)
    {
        cin >> v[i].S;
    }
    v2 = (v);
    sort(all(v));
    //for (auto &i : v) cout << i.F << " " << i.S << endl;
    vl v3(n);
    ll c = 0;
    v3[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i].F > v[0].F)
        {
            c += v[i].F - v[0].F, v3[i] = v[i].F - v[0].F;
            //cout << i << " " << c << endl; 
        } 
    }
    //sort(all(v2), fun);
    //for (auto &i : v2) cout << i.F << " " << i.S << endl;
    ll mn = INT_MAX;
    FOR (i, n) mn = min (mn, v[i].S);
    //cout << mn << endl;
    for (int i = 0; i < n; i++)
    {
        if (v[i].S - mn > v3[i] && v[i].S != mn)
        {
            c += ((v[i].S - mn) - v3[i]);
            //cout << i << " " << c << endl; 
        }
    }
    cout << c << endl;
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
