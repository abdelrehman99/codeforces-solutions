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


bool func (pair <ll, char> &a, pair <ll, char> &b)
{
    if (b.S == a.S) return b.F > a.F;
    return (b.S > a.S);
}

void solve()
{ 
    ll n;
    cin >> n;
    vector < pair < ll, char> > v(n);
    map <ll, bool> v2;
    FOR (i, n) 
    {
        cin >> v[i].F;
    }
    FOR (i, n) 
    {
        cin >> v[i].S;
    }
    sort(all(v), func);
    //for (auto & i : v) cout << i.F << " " << i.S << endl;
    ll c = 1;
    FOR (i, n)
    {
        if (v[i].F == c || (v[i].S == 'B' && v[i].F > c))
        {
            v2[c] = 1;
            c++;
            //cout << '3' << endl;
            continue;
        } 
        else 
        {
            if (v[i].S == 'R') 
            {
                if (v[i].F > c) continue;
                else 
                {
                    v2[c] = 1;
                    c++;
                    //cout << '4' << endl;
                }
            }
        }
        //cout << c << endl;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (v2[i] == false)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
