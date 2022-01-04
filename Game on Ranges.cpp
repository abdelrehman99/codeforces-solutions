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

bool func(pl &a, pl &b)
{
    if (a.F < b.F) return true;
    else if (a.F == b.F)
    {
        if (a.S > b.S) return true;
    }
    return false;
}

void solve()
{ 
    ll n;
    cin >> n;
    vpl v(n);
    FOR (i, n)
    {
        cin >> v[i].F >> v[i].S;
    }
    sort (all(v), func);
    //FOR (i, n)
    {
        //cout << v[i].F << " " << v[i].S << endl;
    }
    FOR (i, n - 1)
    {
        if (v[i].F == v[i].S)
        {
            cout << v[i].F << " " << v[i].S << " " << v[i].F << endl;
        }
        else 
        {
            if (v[i + 1].F == v[i].F)
            {
                cout << v[i].F << " " << v[i].S << " " <<  v[i + 1].S + 1 << endl;
            }
            else
            {
                cout << v[i].F << " " << v[i].S << " " << v[i].F << endl;
            }
        }
    }
    int i = n - 1;
    if (v[i].F == v[i].S)
    {
        cout << v[i].F << " " << v[i].S << " " << v[i].F << endl;
    }
    else
    {
        if (v[i - 1].F == v[i].F)
        {
            cout << v[i].F << " " << v[i].S << " " << v[i].S - 1 << endl;
        }
        else
        {
            cout << v[i].F << " " << v[i].S << " " << v[i].F << endl;
        }
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
