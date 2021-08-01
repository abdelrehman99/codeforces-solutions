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

bool bs(vpii v, int x)
{
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(x >= v[mid].F && x <= v[mid].S) return false;
        (v[mid].F > x ? r = mid - 1 : l = mid + 1);
    }
    return true;
}


void solve()
{ 
    int n;
    cin >> n;
    vi v(n);
    //map <int, pair <int, int> > mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    vpii v2(q), lined;
    vi res;
    //vi res; 
    for (int i = 0; i < q; i++)
    {
        cin >> v2[i].first >> v2[i].S;
    }
    sort(all(v2));
    lined.PB(v2.front());
    for (int i = 1; i < q; i++)
    {
        if (lined.back().S < v2[i].F) lined.PB(v2[i]);
        else if (lined.back().S < v2[i].S) lined.back().S = v2[i].S;
    }
    //for (auto &[i, j] : lined) cout << i << " " << j << endl;
    for (int i = 1; i <= n; i++)
    {
        if (bs(lined, i)) res.PB(v[i - 1]);
    }
    //cout << sum << " ";
    //cout << n - sum << endl;
    //v.erase(v.begin() + 0, v.begin() + 2);
    cout << res.size() << endl;
    for (auto &i : res) cout << i << " "; 
}




int main()
{
    fast;
    //int t = 1;
    //cin >> t;
    //WL(t){
    	solve();
        runtime();
    //}
    return 0;
}

/* for (int i = 1, j = 1; i <= n && j <= q;)
    {
        if (j == q - 1)
        {
            if (i > v2[j].second && i < v2[j + 1].first)
            {
                res.PB(v[i]);
                i = v2[j + 1].first;
            }
            else
            {
                i = v2[j].second + 1;
                j++;
            }
        }
        else
        {
            if (i > v2[j].second || i < v2[j].first) res.PB(v[i]);
            i++;
        }
    } */