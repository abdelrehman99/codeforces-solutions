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


ll bs(vpl &v, ll start, ll end)
{
    ll l = 0, r = v.size() - 1, m, mx = 0;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        if (v[m].F < end) l = m + 1;
        else r = m - 1, mx = max(v[m].S - v[m].F, mx);
    }
    return mx;
}


void solve()
{ 
    ll n, k;
    cin >> n >> k;
    vector<int> x(n), y(n);
    for (auto &it : x) cin >> it;
    for (auto &it : y) cin >> it;
    sort(x.begin(), x.end());
    int j = n - 1;
    vector<int> l(n), r(n);
    for (int i = n - 1; i >= 0; --i) 
    {
        while (x[j] - x[i] > k) --j;
        r[i] = j - i + 1;
        if (i + 1 < n) r[i] = max(r[i], r[i + 1]);
    }
    //for (int i = 0; i < n; i++) cout << r[i] << " ";
    //cout << endl;
    j = 0;
    for (int i = 0; i < n; ++i) 
    {
        while (x[i] - x[j] > k) ++j;
        l[i] = i - j + 1;
        if (i > 0) l[i] = max(l[i], l[i - 1]);
    }
    //for (int i = 0; i < n; i++) cout << l[i] << " ";
    //cout << endl;
    int ans = 1;
    for (int i = 0; i < n - 1; ++i)
    {
        ans = max(ans, r[i + 1] + l[i]);
    }
    cout << ans << endl;
    //ll c = k + 1;
    /*vl v(n), v2(n);
    priority_queue <ll> pq;
    FOR (i, n) cin >> v[i];
    FOR (i, n) cin >> v2[i];
    sort(all(v));
    vpl v3(n);
    FOR (i, n)
    {
        auto it = upper_bound(all(v), v[i] + k);
        //if (*it != v[i] + k) it--;
        //ll x = (it - v.begin()) - i;
        v3[i] = {i + 1, it - v.begin()};
        //i += x - 1;
        //cout << x << endl;
    }
    ll mx = 0, l, r;
    FOR (i, n)
    {
        if (v3[i].S - v3[i].F + 1 > mx)
        {
            mx = v3[i].S - v3[i].F + 1;
            l = v3[i].F, r = v3[i].S;
        }
        //cout << v3[i].F << " " << v3[i].S << endl;
    }
    ll mx2 = 0;
    cout << l << " " << r << endl;
    FOR (i, n)
    {
        if (v3[i].S <= r && v3[i].F >= l) continue;
        if ((v3[i].F >= l))
        {
            if (v3[i].S > r && v3[i].F <= r) mx2 = max(v3[i].S - l + 1, mx2);
            else if (v3[i].F > r) mx2 = max(v3[i].S - v3[i].F + 1 + r - l + 1, mx2);
            //l = v3[i].F, r = v3[i].S;
        }
        else 
        {
            if (v3[i].S >= l) mx2 = max(r - v3[i].F + 1, mx2);
            else if (v3[i].S < l) mx2 = max(v3[i].S - v3[i].F + 1 + r - l + 1, mx2);
            //else  mx2 = max(r - v3[i].F + 1, mx2);
        }
        //cout << i.F << " " << i.S << endl;
    }
    //ll x = pq.top();
    //pq.pop();
    cout << mx << " " << mx2 << endl; 
    cout << mx + mx2 << endl; */ 
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
