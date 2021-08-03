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
    int n, t, k;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    bool flag = true;
    if (n == 1)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        t = n - 2;
        int j = i + 1;
        flag = true;
        //if (j % (n + 1) == 0) j = 1;
        (j >= n ? j = j % n : j = j);
        if (v[i] > v[j])
        {
            //cout << i << " " << j << " ";
            while(t)
            {
                j = j % n;
                (j + 1 >= n ? k = (j + 1) % n : k = j + 1);
                //cout << j << " " << k << endl;
                if (v[j] < v[k])
                {
                    flag = false;
                    break;
                }
                j++;
                t--;
            }
        }
        else
        {
            while(t)
            {
                //j = j % n;
                (j + 1 >= n ? k = (j + 1) % n : k = j + 1);
                //cout << v[j] << " " << v[k] << endl;
                if (v[j] > v[k])
                {
                    flag = false;
                    break;
                }
                j++;
                j = j % n;
                t--;
            }
        }
        if (flag)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
        runtime();
    }
    return 0;
}
