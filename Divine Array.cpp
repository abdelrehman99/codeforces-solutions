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
    ll n, q;
    cin >> n;
    vl v(n), v3(n);
    map <ll, ll> mp;
    FOR (i, n)
    {
        cin >> v[i];
        //v3[i] = v[i];
        //mp[v[i]]++;
    }
    cin >> q;
    vpl v2(q);
    int h = 0;
    vvl v4(n + 1, vl (n + 1));
    v4[h] = v;
    //FOR (i, n) cout << v4[0][i] << " ";
    //cout << endl;
    while (true)
    {
        for (ll j = 0; j < n; j++)
        {
            mp[v[j]]++;
        }
        for (ll j = 0; j < n; j++)
        {
            v[j] = mp[v[j]];
        }
        mp.clear();
        //FOR (i, n) cout << v[i] << " ";
        //cout << endl;
        //h++;
        //cout << h << endl;
        if (v4[h] == v)
        {
            //h--;
            break;
        }
        v4[++h] = v;
    }
    /*FOR (i, h)
    {
        FOR (j, n)
        {
            cout << v4[i][j] << " ";
        }
        cout << endl;
    } */
    FOR (i, q)
    {
        cin >> v2[i].F >> v2[i].S;
        cout << (v2[i].S >= h ? v4[h][v2[i].F - 1] : v4[v2[i].S][v2[i].F - 1]) << endl;
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
