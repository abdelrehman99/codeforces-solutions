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
typedef long long ll;
typedef long double ld;
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
    ll n, l;
    cin >> n >> l; 
    vl v(n);
    FOR (i, n) cin >> v[i];
    vl v2;
    ll m0, m1, sum = 0, c;
    for (ll j = 0; ; j++)
    {
        c = m0 = m1 = 0;
        FOR (i, n)
        {
            if (v[i] <= 0) 
            {
                c++;
                m0++;
                continue;
            }
            if (v[i] % 2 == 0) m0++;
            else m1++;
            v[i] /= 2;
        }
        //cout << j << " " << m0 << " " << m1 << endl;
        if (m0 <= m1) v2.PB(1);
        else v2.PB(0);
        if (c == n) break;
    }
    //reverse(all(v2));
    v2.resize(v2.size());
    FOR (j, v2.size())
    {
        if (v2[j] == 1)
        {
            sum += pow(2, j);
        } 
    }
    cout << sum << endl;
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
