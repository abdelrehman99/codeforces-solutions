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



int solve (string &s, string &t)
{
    int l = 0, r = 0, tp = 0;
    while (l < s.size() && r < t.size())
    {
        if (s[l] == t[r])
        {
            tp++;
            r++;
        }
        l++;
    }
    return (int)s.length() - tp + (int)t.length() - tp;
}


signed main()
{
    fast;
    int t;
    vector <string> v;
    //v.PB("1");
    for (ll j = 1; j <= (ll)2e18; j *= 2)
    {
        v.PB(to_string(j));
    }
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int c = s.size() + 1;
        //string s = to_string(n);
        //bool flag = false;
        //if (v[s]) cout << 0 << endl;
        //string ss = s;
        for (auto & i : v) c = min (c, solve(s, i));
        cout << c << endl; 
    }
    	//cout << v[n - 1] << endl;
}
