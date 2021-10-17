#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define cin(v) for (auto &i : v) cin >> i;
#define cout(v) for (auto &i : v) cout << i << " ";
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


bool sei[M];
vector<int> primes;

void solve()
{ 
    ll n, sum = 0;
    cin >> n;
    vl v(n);
    //map <int, int> v2;
    FOR (i, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    while (true)
    {
        if (!sei[sum])
        {
            FOR (j, n)
            {
                if (sei[sum - v[j]])
                {
                    cout << n - 1 << endl;
                    FOR (k, n)
                    {
                        if (k != j)
                        {
                            cout << k + 1 << " ";
                        }
                    }
                    cout << endl;
                    return;
                }
            }
        }
        else 
        {
            cout << n << endl;
            FOR (i, n) cout << i + 1 << " ";
            cout << endl;
            return;
        }
    }
}




signed main(){
    fast;
    for (int i = 2; i<=20001; i++){
        if (sei[i])
            continue;
        primes.PB(i);
        for (int j = 2*i; j<=20001; j+=i){
            sei[j] = true;
        }
    }
    //if (!sei[2]) cout << "YES\n";
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
        runtime();
    }
    return 0;
}
