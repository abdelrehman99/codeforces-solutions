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
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    } 
    vector <int> v(n + 1);
    vector <unsigned long long> sum(n - k + 2);
    v[0] = 0;
    sum[0] = mod;
    //unsigned long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int j = 1; j <= k; j++)
    {
        sum[1] += v[j];
    }
    for (int i = 2; i <= n - k + 1; i++)
    {
        sum[i] = sum[i - 1] + v[i + (k - 1)] - v[i - 1];
    }
    //cout << sum.size() << endl; 
    //for (auto &i : sum) cout << i << " ";
    //cout << endl;
    //sort (v.begin(), v.end());
    //for (auto &i : v) cout << i << " ";
    cout << min_element(sum.begin(), sum.end()) - sum.begin() << endl;
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
