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


bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.F < b.F);
}

void solve()
{ 
    int n, t, a;
    llu c = 0;
    cin >> n;
    vpii v, v2;
    FOR (i, n)
    {
        cin >> t >> a;
        if (t > 0) c++;
        (t > 0 ? v.PB({t, a}) : v2.PB({t, a}));
    }
    //cout << c << n - c << endl; 
    v.resize(c);
    v2.resize(n - c);
    sort (v.begin(), v.end());
    sort (v2.rbegin(), v2.rend());
    //cout << v.size() << " " << v2.size() << endl;
    t = min(v.size(), v2.size());
    c = 0;
    //a = n - t;
    if (v.size() > v2.size())
    {
        FOR (i, t)
        {
            if (i >= v2.size()) break;
            c += v2[i].S;
        }
        FOR (i, t + 1)
        {
            if (i >= v.size()) break;
            c += v[i].S;
        }
    }
    else 
    {
        FOR (i, t + 1)
        {
            if (i >= v2.size()) break;
            c += v2[i].S;
        }
        FOR (i, t)
        {
            if (i >= v.size()) break;
            c += v[i].S;
        }
    }
    cout << c << endl;
}




signed main(){
    fast;
    int t = 1;
    //cin >> t;
    WL(t)
    {
    	solve();
        runtime();
    }
    return 0;
}
