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
    string s;
    ll n;
    cin >> s >> n;
    vl v(s.size());
    v[0] = (s[0] - '0');
    for (ll i = 1; i < s.size(); i++)
    {
        v[i] = (s[i] - '0') + v[i - 1];
    }
    reverse(all(s));
    //cout << v[0] << endl;
    if (v.back() <= n)
    {
        cout << 0 << endl;
        return;
    }
    vl res;
    ll rem = 0;
    for (ll i = 0, j = s.size() - 1; i < s.size(); i++, j--)
    {
        if ((rem == 1 && s[i] == '0'))
        {
            if (v[j] + rem > n)
            {
                res.PB((10 - (rem + (s[i] - '0'))) % 10);
                rem = 1;
            }
            else 
            {
                //if (v[j] > n) res.PB((s[i] - '0') + rem);
                //rem = 0;
                break;
            }
        }
        else if ((v[j] + rem > n && s[i] != '0'))
        {
            res.PB((10 - (rem + (s[i] - '0'))) % 10);
            rem = 1;
        }
        else 
        {
            if (v[j] > n) res.PB((s[i] - '0') + rem);
            else break;
            //res.PB((s[i] - '0') + rem);
            //rem = 0;
        }
    }
    while(res.back() == 0) res.pop_back();
    reverse(all(res));
    for (auto &i : res) cout << i;
    cout << endl;
}




signed main()
{
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}
