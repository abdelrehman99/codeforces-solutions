#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 1; i <= (int) n; i++)
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


ll bs (ll i, vector <pair <ll, pair <ll, ll> >> &v)
{
    ll l = 1, r = v.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (i >= v[mid].S.F && i <= v[mid].S.S)
        {
            return v[mid].F;
        }
        else if (i > v[mid].S.F)
        {
            l = mid + 1;
        }
        else r = mid - 1;
    }
    //return v[mid].F;
}

void solve()
{ 
    ll n, q;
    cin >> n;
    vl v(n + 1);
    v[0] = 0;
    vector <pair <ll, pair <ll, ll> >> v2;
    v2.PB({0, {0, 0}});
    FOR (i, n)
    {
        cin >> v[i];
        v2.PB({i, {v2[i - 1].S.S + 1, v2[i - 1].S.S + v[i]}});
    }
    //for (auto &i : v2)
    {
        //cout << i.F << " " << i.S.F << " " << i.S.S << endl;
    }
    cin >> q;
    FOR (i, q) 
    {
        ll g;
        cin >> g;
        cout << bs(g, v2) << endl;
    }
    //cout << x << endl;
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