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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int &e : v) {
        cin >> e;
    }
    sort(v.begin(), v.end());
	ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
        //cout << upper_bound(v.begin(), v.end(), r - v[i]) - v.begin() << " ";
        ans -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();
        //cout << lower_bound(v.begin(), v.end(), l - v[i]) - v.begin() << " ";
        if (l <= 2 * v[i] && 2 * v[i] <= r) {
            ans--;
        }
        //cout << endl;
    }
    //cout << endl;
    cout << ans / 2 << "\n";
}




signed main()
{
    fast;
    int t = 1;
    cin >> t;
    while(t--)
    {
    	solve();
    }
    return 0;
}
