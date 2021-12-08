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

map <char, char> m;

void bs (vector <char> &v, char c)
{
    ll l = 0, r = v.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (v[mid] == m[c]) break;
        else if (v[mid] > m[c]) r = mid - 1;
        else l = mid + 1;
    }
    if (v[mid] == m[c])
    {
        v[mid] = c;
    }
}


void solve()
{ 
    ll n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    vl v[2];
    vl v2(n, -1);
    FOR (i, n)
    {
        ll x = s[i] - '0';
        if (v[x].empty()) {
            v2[i] = c++;
        } else {
            v2[i] = v[x].back();
            v[x].pop_back();
        }
        v[!x].push_back(v2[i]);
    }
    //cout << c << " ";
    cout << c << endl;
    //for (auto & i : v) cout << i << endl;
    FOR (i, n)
    {
        cout << v2[i] + 1 << " ";
    }
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