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

ll binpow(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b % 2)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

void solve(int t)
{ 
    ll n, k;
    cin >> n >> k;
    string s, s2;
    cin >> s;
    ll ans = 0;
    string str = s;
    ll mid = (n + 1) / 2;
    for (ll i = 0; i < mid; i++)
    {
        ll mn = min((ll)(s[i] - 'a'), k);
        ll curr = (mn * binpow(k, mid - i - 1));
        ans = (ans + curr) % mod;
        str[n - i - 1] = str[i];
    }
    if (str < s)
        ans++;
    cout << "Case #" << t << ": " << ans % mod << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
    	solve(i);
    }
    //runtime();
    return 0;
}
