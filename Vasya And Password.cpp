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
    cin >> s;
    ll u, l, d;
    u = l = d = 0;
    FOR (i, s.size())
    {
        if (isupper(s[i])) u++;
        else if (islower(s[i])) l++;
        else d++;
    }
    //cout << u << " " << l << " " << d << endl;
    if (u > 0 && d > 0 && l > 0)
    {
        cout << s << endl;
        return;
    }
    FOR (i, s.size())
    {
        if (isupper(s[i]) && u > 1)
        {
            if (d == 0)
            {
                s[i] = '1';
                d++;
            }
            else if (l == 0) s[i] = 'a', l++;
            u--;
        }
        else if (islower(s[i]) && l > 1)
        {
            if (d == 0)
            {
                s[i] = '1';
                d++;
            }
            else if (u == 0) s[i] = 'A', u++;
            l--;
        }
        else if (isdigit(s[i]) && d > 1)
        {
            if (l == 0)
            {
                s[i] = 'a';
                l++;
            }
            else if (u == 0) s[i] = 'A', u++;
            d--;
        }
    }
    FOR(i, s.size()) cout << s[i];
    cout << endl;
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
