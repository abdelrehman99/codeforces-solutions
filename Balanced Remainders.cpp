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
    int n, m, x, d = 0;
    int c[3];
    cin >> n;
    m = n / 3; 
    //vi v(n);
    //c0 = c1 = c2 = 0;
    //cin(v);
    c[0] = c[1] = c[2] = 0;
    FOR (i, n)
    {
        cin >> x;
        //int temp = (x % 3 == 0 ? 0 : (x) );
        //cout << x << " " << temp << endl;
        c[x % 3]++;
        //(temp == 0 ? c0++ : (temp == 1 ? c1++, c2++));
    }
    //cout << c[0] << " " << c[1] << " " << c[2] << endl;
    if (c[0] == c[1] && c[1] == c[2])
    {
        cout << 0 << endl;
        return;
    }
    while (c[0] != m || c[1] != m || c[2] != m)
    {
        if (c[0] < m) c[0]++, c[2]--;
        else if (c[1] < m) c[1]++, c[0]--;
        else c[2]++, c[1]--;
        //cout << "S\n";
        d++;
    }
    cout << d << endl; 
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
