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
    //vector <llu> v(n);
    llu mn = 0, c = 0, m;
    //cout << s.size() << endl;
    //FOR(i, s.size()) cout << s[i];
    //cout << endl;
    FOR(i, n)
    {
        cin >> m;
        mn = __gcd(mn, m);
    }
    //int n = res.size();
    for (llu j = 1; j * j <= mn; j++)
    {
        if (mn % j == 0)
        {
            c++;
            if (j != (mn / j)) c++;
        } 
    }
    cout << c << endl;
}




signed main(){
    fast;
    int t = 1;
    //cin >> t;
    WL(t)
    {
        //vi v;
    	solve();
    }
    runtime();
    return 0;
}
