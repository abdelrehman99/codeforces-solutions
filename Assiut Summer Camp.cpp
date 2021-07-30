#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i) for(int i = 0; i < 4; i++)
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




void solve()
{ 
    vector < pair <int, string> > vp = {{0, "Hussien"}, {0, "Atef"}, {0, "Karemo"}, {0, "Ezzat"}};
    FOR(i)
    {
        cin >> vp[i].first;
    }
    sort (vp.rbegin(), vp.rend());
    cout << vp[0].second << " " << vp[1].second << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
        //runtime();
    }
    return 0;
}
