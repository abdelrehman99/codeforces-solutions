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
    ll a, b, ans = 0, valid = 1;
		cin >> a >> b;
		if(a > b)
			swap(a, b);
		while(a < b && valid){
			if(a * 8 <= b)
				a *= 8;
			else if(a * 4 <= b)
				a *= 4;
			else if(a * 2 <= b)
				a *= 2;
			else if(a * 2 > b){
				valid = 0;
				break;
			}
			ans++;	
		}		
		cout << (valid ? ans : -1 ) << endl;
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
