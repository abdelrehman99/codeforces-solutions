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
    ll n, q, sum = 0;
    cin >> n >> q;
    string s;
    cin >> s;
    FOR (i, s.size() - 2)
    {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') sum++;
    }
    //cout << sum << endl;
    FOR (i, q)
    {
        char c;
        int pos;
        cin >> pos >> c;
        pos--;
        if (s[pos] == c)
        {
            cout << sum << endl;
            continue;
        } 
        //s[pos] = c;
        if (c == 'a')
        {
            if (pos < n - 2 && s[pos + 1] == 'b' && s[pos + 2] == 'c') sum++;
        }
        else if (c == 'b')
        {
            if (pos < n - 1 && pos > 0 && s[pos - 1] == 'a' && s[pos + 1] == 'c') sum++;
            //if ((pos < n - 1 && s[pos] == 'a' && s[pos + 1] == 'b' && s[pos + 2] == 'c') || (pos > 1 && s[pos - 2] == 'a' && s[pos - 1] == 'b' && s[pos] == 'c') || (pos > 1 && pos < n - 1 && s[pos - 1] == 'a' && s[pos] == 'b' && s[pos + 1] == 'c')) sum--;
        }
        else if (c == 'c')
        {
            if (pos > 1 && s[pos - 2] == 'a' && s[pos - 1] == 'b') sum++;
            //if ((pos < n - 1 && s[pos] == 'a' && s[pos + 1] == 'b' && s[pos + 2] == 'c') || (pos > 1 && s[pos - 2] == 'a' && s[pos - 1] == 'b' && s[pos] == 'c') || (pos > 1 && pos < n - 1 && s[pos - 1] == 'a' && s[pos] == 'b' && s[pos + 1] == 'c')) sum--;
        }
        if ((pos < n - 1 && s[pos] == 'a' && s[pos + 1] == 'b' && s[pos + 2] == 'c') || (pos > 1 && s[pos - 2] == 'a' && s[pos - 1] == 'b' && s[pos] == 'c') || (pos > 0 && pos < n - 1 && s[pos - 1] == 'a' && s[pos] == 'b' && s[pos + 1] == 'c')) sum--;
        //if (((pos > 0 && pos < n - 1 && s[pos - 1] == 'a' && s[pos] != 'b' && s[pos + 1] == 'c') || (pos < n - 2 && s[pos] == 'a' && s[pos + 1] == 'b' && s[pos + 2] == 'c') || (pos > 1 && s[pos - 1] == 'b' && s[pos] == 'c' && s[pos - 2] == 'a'))) sum--;
        s[pos] = c;
        //cout << s << " ";
        //if (sum == 0) cout << 0 << endl;
        cout << sum << endl;
    }
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
