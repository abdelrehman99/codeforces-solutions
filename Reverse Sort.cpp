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
    int n;
    cin >> n;
    string s, s2;
    cin >> s;
    s2 = s;
    sort(all(s2));
    //FOR (i, n) cout << s[i] << " ";
    //cout << endl;
    //FOR (i, n) cout << s2[i] << " ";
    //cout << endl;
    //cout << s2 << endl;
    if (s == s2)
    {
        cout << 0 << endl;
        return;
    }
    vector < set <int> > v(n);
    int m = 0;
    while (s != s2)
    {
        //int l = 0, r = n - 1;
        for (int l = 0; l < n - 1; l++)
        {
            if (s[l] == '1')
            {
                for (int r = n - 1; r > l; r--)
                {
                    if (s[r] == '0')
                    {
                        v[m].insert(l + 1);
                        v[m].insert(r + 1);
                        swap(s[l], s[r]);
                        break;
                    }
                }
            }
        }
        m++;
    }
    cout << m << endl;
    FOR (i, m)
    {
        cout << v[i].size() << " ";
        for (auto &j : v[i]) cout << j << " ";
        cout << endl;
    }
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
