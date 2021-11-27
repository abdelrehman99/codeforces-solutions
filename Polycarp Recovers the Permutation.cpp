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
    ll n;
    cin >> n;
    vl a(n), p(n), v;
    FOR (i, n) cin >> a[i];
    p = a;
    reverse(all(p));
    //ll l = 0, r = n - 1;
    if (n != a[0] && n != a[n - 1])
    {
        cout << -1 << endl;
        return;
    }
    FOR (i, n) cout << p[i] << " ";
    cout << endl;
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

/*
if (a[0] == p[l] || a[n - 1] == p[l])
            {
                //cout << v.size() << endl;
                for (auto i = (v.begin()); i != (v.end()); i++)
                {
                    cout << *i << " " << a[j] << endl;
                    if (*i != a[j] && j != n - 1)
                    {
                        cout << -1 << endl;
                        return;
                    }
                    j++;
                }
            }
            else 
            {
                cout << -1 << endl;
                return;
            }
            FOR (i, n) cout << a[i] << " ";
            cout << endl;
            break;
            */