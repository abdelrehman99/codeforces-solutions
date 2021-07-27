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
#define forn(i, n) for (int i = 0; i < int(n); i++)




void solve()
{
	int n, k;
        cin >> n >> k;
        vector<int> a(k);
        forn(i, k)
            cin >> a[i];
        vector<int> t(k);
        forn(i, k)
            cin >> t[i];
        vector<long long> c(n, INT_MAX);
        forn(i, k)
            c[a[i] - 1] = t[i];

        long long p;

        vector<long long> L(n, INT_MAX);
        p = INT_MAX;
        forn(i, n) {
            p = min(p + 1, c[i]);
            L[i] = p;
        }

        vector<long long> R(n, INT_MAX);
        p = INT_MAX;
        for (int i = n - 1; i >= 0; i--) {
            p = min(p + 1, c[i]);
            R[i] = p;
        }

        forn(i, n)  
            cout << min(L[i], R[i]) << " ";
        cout << endl;
}




signed main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {
    	solve();
    }
    return 0;
}
