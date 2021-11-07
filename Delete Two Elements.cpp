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
typedef vector<ld>		vld;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

//set < pair <ll, ll> > v2;

void bs (ld x, vld & v, ll l, ll i)
{
    ll r = v.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (v[mid] == x)
        {
            //v2.insert({i, mid}), v2.insert({mid, i});
            //return;
        } 
        else if (v[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return;
}


void solve()
{ 
    ll n, c = 0;
    cin >> n;
    vld  v(n);
    ld sum = 0;
    map <ll, ll> v2;
    FOR (i, n) 
    {
        cin >> v[i];
        sum += v[i];
        v2[v[i]]++;
    }
    sum /= n;
    if (sum * 2 != (ll) (sum * 2))
    {
        cout << 0 << endl;
        return;
    }
    sum *= 2;
    FOR (i, n)
    {
        ll x = v2[(sum - v[i])];
        //cout << x << " " << i.F << " " << v2[i.F] << endl;
        if (x > 0)
        {
            if (v[i] == (sum - v[i])) c--;
            c += x;
        } 
    }
    //for (auto &i : v2) cout << i.F << " " << i.S << endl;
    //cout << endl;
    cout << c / 2 << endl;
    //v2.clear();
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
