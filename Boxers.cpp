#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
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
    int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int lst = a[0] + 2;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		int cur = -1;
		for (int dx = 1; dx >= -1; --dx) {
			if (a[i] + dx > 0 && a[i] + dx < lst) {
				cur = a[i] + dx;
				break;
			}
		}
		if (cur == -1) continue;
		++ans;
		lst = cur;
	}
	cout << ans << endl;
}
    //cout << endl;
    //cout << c << endl;




signed main(){
    fast;
    int t = 1;
    //cin >> t;
    WL(t){
    	solve();
        runtime();
    }
    return 0;
}
/*
for (auto i = v.begin(); i != v.end(); i++)
    {
        //bool flag = true;
        t = 0;
        if (res[*i] > 3 || res[*i] == 0)
        {
            if (res[*i] != 0)
            {
                i += res[*i] - 1; 
            }
            continue;
        }
        if (res[*i] == 1)
        {
            //cout << i - v.begin() << " ";
            c++;
            continue;
        }
        t += (res[*i] - 1); 
        if (res[*i] > 1 && (i == v.end() - 1 || res[*(i) + 1] == 0))
        {
            c++;
            //v.insert(i, (*i) + 1);
            res[*(i) + 1]++;
            //cout << i - v.begin() << " ";
            res[*i]--;
        }
        if (res[*i] > 1 && ( (i == v.begin() && *i != 1) || (res[*(i) - 1] == 0 && *i != 1)))
        {
            c++;
            res[*(i) + 1]--;
            //cout << i - v.begin() << " ";
            res[*i]--;
        }
        i += t;
        c++;
    } 
    */