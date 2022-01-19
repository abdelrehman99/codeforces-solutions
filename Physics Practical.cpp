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
void CodeFast()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
//#endif
}

void solve()
{ 
    ll n;
    cin >> n;
    vl v(n);
    map <ll, ll> mp;
    FOR (i, n)
    {
        cin >> v[i];
    }
    sort(all(v));
    for (ll i = n - 1; i >= 0; i--)
    {
        mp[v[i]] = max(i, mp[v[i]]);
    } 
    ll c = INT_MAX;
    FOR (i, n)
    {
        auto it1 = lower_bound(all(v), v[i] * 2);
        if (it1 == v.end()) it1--;
        while((*(it1) > v[i] * 2) && (it1 != v.begin())) it1--;
        if (it1 == v.begin() && *it1 > v[i] * 2) 
        {
            c = min(c, (ll)i + n - 1);
            continue;
        }
        c = min(c, (ll)i + n - 1 - mp[*it1]);
        //cout << v[i] << " " << *it1 << " " << (n - 1 - mp[*it1]) << endl;
    }
    //if (c == INT_MAX) c = n - 1;
    cout << c << endl;
}




signed main(){
    //fast;
    int t = 1;
    CodeFast();
    //cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}
