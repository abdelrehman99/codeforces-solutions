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
    ll n[6];
    char c;
    cin >> c;
    n[0] = c - '0';
    cin >> c;
    n[1] = c - '0';
    cin >> c;
    n[2] = c - '0';
    cin >> c;
    n[3] = c - '0';
    cin >> c;
    n[4] = c - '0';
    cin >> c;
    n[5] = c - '0';
    ll sum1 = n[0] + n[1] + n[2], sum2 = n[3] + n[4] + n[5];
    if (sum2 > sum1)
    {
        swap (sum1, sum2);
        swap(n[0], n[3]);
        swap(n[1], n[4]);
        swap(n[2], n[5]);
    }
    //n[0] = max(n[0], 9 - n[0]);
    //n[1] = max(n[1], 9 - n[1]);
    //n[2] = max(n[2], 9 - n[2]);
    n[3] = 9 - n[3];
    n[4] = 9 - n[4];
    n[5] = 9 - n[5];
    sort (n, n + 6);
    ll dif = abs (sum1 - sum2);
    int i = 5;
    while (dif > 0)
    {
        dif -= n[i];
        i--;
    }
    cout << 5 - i << endl;
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
