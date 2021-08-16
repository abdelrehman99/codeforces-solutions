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




void solve()
{ 
    int n;
    cin >> n;
    string s;
    cin >> s;
    //char c;
    FOR (i, n)
    {
        if (s[i] == 'B' || s[i] == 'R')
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == '?')
                {
                    if (s[j + 1] == 'R') s[j] = 'B';
                    else s[j] = 'R';
                }
                else break;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == '?')
                {
                    if (s[j - 1] == 'R') s[j] = 'B';
                    else s[j] = 'R';
                }
                else break;
            }
        }
    }
    if (s[0] == '?')
    {
        FOR(i, n)
        {
            if (i % 2 == 0) s[i] = 'B';
            else s[i] = 'R';
        }
    }
    cout << s << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
        //runtime();
    }
    return 0;
}
