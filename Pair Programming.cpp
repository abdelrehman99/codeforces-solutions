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
	int k, n, m;
    cin >> k >> n >> m;
    int v1[n], v2[m];
    vector <int > res;
    bool flag = true;
    /*for (int i = 0; i < k; i++)
    {
        res.push_back(-1);
    } */
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int l1 = 0, l2 = 0, i = 0;
    while (l1 != n || l2 != m)
    {
        if (v1[l1] == 0 && l1 != n)
        {
            res.push_back(0);
            l1++;
            k++;
        }
        else if (v2[l2] == 0 && l2 != m)
        {
            res.push_back(0);
            l2++;
            k++;
        }
        else if (l1 != n && v1[l1] <= k)
        {
            res.push_back(v1[l1]);
            l1++;
        }
        else if (l2 != m && v2[l2] <= k)
        { 
            res.push_back(v2[l2]);
            l2++;
        }
        else
        {
            flag = false;
            break;
        }
    }
    //cout << i << endl;
    if (!flag)
    {
        cout << "-1\n";
        return;
    } 
    for (auto &i : res) cout << i << " ";
    cout << endl;
}




signed main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}
