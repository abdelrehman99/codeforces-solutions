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
    int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	vector<int> poss;
	for (int i = 0; i < n; ++i) {
		int x = a[i];
		while (x > 0) {
			poss.push_back(x);
			x /= 2;
		}
	}
	
	int ans = 1e9;
	for (auto res : poss) {
		vector<int> cnt;
		for (int i = 0; i < n; ++i) {
			int x = a[i];
			int cur = 0;
			while (x > res) {
				x /= 2;
				++cur;
			}
			if (x == res) {
				cnt.push_back(cur);
			}
		}
		if (int(cnt.size()) < k) continue;
		sort(cnt.begin(), cnt.end());
		ans = min(ans, accumulate(cnt.begin(), cnt.begin() + k, 0));
	}
	
	cout << ans << endl;
	

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
