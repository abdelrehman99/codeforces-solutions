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

vl v;
string s; 

ll search(string s2)
{
    int j = 0, fi = -1, la = -1, c = 0;
    for (int i = s.size() -1 ; i >= 0; i--)
    {
        if (s[i] == s2[j])
        {
            if (j == 0) fi = i;
            else {la = i; break;}
            j++;
        }
    }
    if (fi == -1 || la == -1) return INT_MAX;
    return (fi - (la + 1)) + s.size() - fi - 1;
}


void solve()
{ 
    cin >> s;
    ll c = INT_MAX, d = INT_MAX, f = -1, l = -1;
    c = min(c, search("52"));
    //cout << c << endl;
    //cout << search("05") << endl;
    c = min(c, search("05"));
    c = min(c, search("57"));
    for (int i = s.size() -1 ; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            if (f != -1) 
            {
                l = i;
                break;
            }
            f = i;
        }
    }
    if (f != -1 && l != -1) d = (s.size() - f - 1) + (f - l - 1);
    c = min(c, d);
    cout << c << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
        runtime();
    }
    return 0;
}
