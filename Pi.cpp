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
	int n, c;
    while (cin >> n && n != 0)
    {
        c = 0;
        vector <int> v(n);
        int t = n * (n-1) / 2;
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(v[i], v[j]) == 1) c++; 
            }
            //cout << i + 1 << " " << c << endl;
        }
        //cout << c << endl;
        if (c == 0) cout << "No estimate for this data set.\n";
        else cout << fixed << setprecision (6) << sqrt ( (t * 6) / (c * 1.0)) << endl;
    }
}




signed main()
{
    fast;
    //int t = 1;
    //cin >> t;
    //while(t--){
    	solve();
    //}
    return 0;
}
