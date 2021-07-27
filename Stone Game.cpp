#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}




void solve()
{
	int n;
    cin >> n;
    vector <pair <int, int> > vs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vs[i].first;
        vs[i].second = i + 1;
    }
    sort(vs.begin(), vs.end());
    cout << min (min (abs(vs[0].second - vs[n - 1].second) + min (vs[0].second, vs[n - 1].second ), abs((n - vs[0].second + 1) - (n - vs[n - 1].second + 1)) + min (n - vs[n - 1].second + 1, n - vs[0].second + 1)), min (vs[0].second, vs[n - 1].second) + min (n - vs[0].second + 1, n - vs[n - 1].second + 1)) << endl;
}




signed main(){
    fast;
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}
