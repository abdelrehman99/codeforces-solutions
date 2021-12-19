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


ll bs (ll m, ll end)
{
    ll l = 1, r = end, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if ((((mid + 1) * (mid)) / 2) * mid == m) return mid;
        else if ((((mid + 1) * (mid)) / 2) * mid > m) r = mid - 1;
        else l = mid + 1; 
    }
    if ((((mid + 1) * (mid)) / 2) * mid > m) return mid - 1;
    return mid;
}


void solve()
{ 
    ll n, m, c = 0, sum = 0, k, rescost = 0;
    cin >> n >> m;
    vl v(n);
    map <ll, priority_queue < ll, vl ,greater <ll> > > mp;
    //ll sum = 0, k = 1;
    FOR (i, n)
    {
        cin >> v[i];
        //sum += v[i];
        //res[i] = v[i];
    }
    c = bs(m, n);
    k = ((c * (c + 1)) / 2) * c;
    FOR (i, n)
    {
        sum = 0;
        for (ll j = i, h = 1; j < min(i + c, n); j++, h++)
        {
            sum += v[j];
            if (sum + (((h * (h + 1)) / 2) * h) <= m) mp[h].push(sum);
        }
        //if (sum + k <= m) rescost = max(rescost, sum + k);
    }
    for (ll i = k; i >= 1; i--)
    {
        if (!mp[i].empty())
        {
            cout << i << " " << mp[i].top() + (((i * (i + 1)) / 2) * i) << endl;
            return;
        }
    }
    cout << "0 0" << endl;
    //else cout << c << " " << rescost << endl;
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

/*
FOR (i, n)
    {
        if (sum + (v[i] + (((k * (k + 1)) / 2) * (k))) > m)
        {
            //cout << k << c << endl;
            //cout << (((k * (k + 1)) / 2) * (k)) << " " << sum << endl;
            //if (sum == 0) sum += v[i];
            //cout << sum << endl;
            if (c == 0) rescost = (v[i] + (k > 2 ? (((k * (k - 1)) / 2) * (k - 1)) : 1)), c = 1;
            if (k - 1 == c) rescost = min (rescost, sum + (k > 2 ? (((k * (k - 1)) / 2) * (k - 1)) : 1));
            if ((k - 1) > c) c = k - 1, rescost = sum + (k > 2 ? (((k * (k - 1)) / 2) * (k - 1)) : 1);
            if (v[i] >= m) sum = 0;
            else sum = v[i];
            k = 1;
        }
        else sum += v[i], k++;
        //cout << i << " " << rescost << " " << k << " " << c << endl;
    }
    //cout << sum << endl;
    if ((sum + (((k * (k - 1)) / 2) * (k - 1))) <= m)
    {
        //cout << k << endl;
        //cout << (((k * (k + 1)) / 2) * (k)) << " " << sum << endl;
        if ((k - 1) > c) c = k - 1, rescost = sum + (((k * (k - 1)) / 2) * (k - 1));
        //k = 1, sum = v[i];
    }
    */