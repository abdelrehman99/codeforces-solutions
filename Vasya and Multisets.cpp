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
    int n, j = 0;
    cin >> n;
    vi v(n);
    map <int, int> mp, m;
    m[0] = 'A';
    m[1] = 'B';
    FOR (i, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int c = 0, c2 = 0;
    for (auto & i : mp)
    {
        if (i.S == 1) c++;
        if (i.S > 2) c2++;
        //else if (i.S > 2) c2++;
    }
    if (c % 2 == 0)
    {
        cout << "YES\n";
        FOR (i, n)
        {
            if (mp[v[i]] == 1)
            {
                cout << (char) (m[j % 2]);
                j++;
            } 
            else cout << 'A'; 
        }
    }
    else
    {
        if (c2 == 0 && c % 2 != 0)
        {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        string res(n, 'A');
        FOR (i, n)
        {
            if (mp[v[i]] == 1) 
            {
                res[i] = ((char) (m[j % 2]));
                j++;
            }
        }
        FOR (i, n)
        {
            if (mp[v[i]] > 2)
            {
                res[i] = ((char) (m[j % 2]));
                break;
            }
        }
        FOR (i, n) cout << res[i];
        cout << endl;
    } 
}




signed main(){
    fast;
    int t = 1;
    //cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}
