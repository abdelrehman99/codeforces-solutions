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
    int n, temp, q, t, l, r;
    cin >> n;
    vector <unsigned long long> v(n + 1), vv2(n + 1);
    vector <int> v2(n + 1);
    v.push_back(0);
    v2.push_back(0);
    vv2.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        v[i] = v[i - 1] + temp;
        v2[i] = temp; 
    }
    sort (v2.begin(), v2.end());
    for (int i = 1; i <= n; i++)
    {
        vv2[i] = vv2[i - 1] + v2[i + 1]; 
    }
    //for (int i = 1; i <= n; i++)
    {
        //cout << vv2[i] << " ";
    }
    //cout << endl;
    cin >> q;
    while (q--)
    {
        cin >> t >> l >> r;
        cout << (t == 1 ? v[r] - v[l - 1] : vv2[r] - vv2[l - 1]) << endl;
    }
}




signed main(){
    fast;
    //int t = 1;
    //cin >> t;
    //while(t--){
    	solve();
    //}
    return 0;
}
