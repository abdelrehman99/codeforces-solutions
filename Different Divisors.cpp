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




void solve(vi &v)
{
    vector <bool> sei(M);
    //vector<int> primes;
    for (int i = 2; i<=M; i++)
    {
        if (sei[i])
            continue;
        v.PB(i);
        for (int j = 2*i; j<=M; j+=i){
            sei[j] = true;
        }
    }
    //auto it = lower_bound(all(v), 4); 
    //for (auto &i : v) cout << i << endl;
    //cout << v[2] << endl;
}




signed main(){
    fast;
    int t = 1, n;
    vi v;
    solve(v);
    cin >> t;
    WL(t)
    {
        cin >> n;
        ll first = *upper_bound(all(v), n); 
        ll second = *lower_bound(all(v), n + first);
        //cout << first << " " << second << " ";
        cout << first * second << "\n";
    }
    runtime();
    return 0;
}
