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


vpl v(10);

void solve()
{ 
    llu n, m;
    cin >> n >> m;
    if (m > n || (m % 10 == 0)) 
    {
        cout << 0 << endl;
        return;
    }
    if (m == n)
    {
        cout << m % 10 << endl;
        return;
    }
    if (n <= 45)
    {
        llu sum = 0, v2 = m;
        for (; m <= n; m += v2)
        {
            sum += (m % 10);
        }
        cout << sum << endl;
    }
    else 
    {
        llu i = v[m % 10].F, j = v[m % 10].S, c = ((n / m) / i) * j, sum = 0, v2 = m;
        for (llu k = 0; k < (n / v2) % i; k++, m += v2)
        {
            sum += (m % 10);
        }
        cout << sum + c << endl;
    }
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    v[1] = {10, 45};
    v[2] = {5, 20};
    v[3] = {10, 45};
    v[4] = {5, 20};
    v[5] = {2, 5};
    v[6] = {5, 20};
    v[7] = {10, 45};
    v[8] = {5, 20};
    v[9] = {10, 45};
    //cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}
