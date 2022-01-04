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


struct seg 
{
    ll l, r, c;
};


void solve()
{ 
    ll n;
    cin >> n;
    const int A = 1e9 + 1;
    int minL = A, costL = A;
    int maxR = 0, costR = A;
    int maxLen = 0, costLen = A;
    for (int i = 0; i < n; i++)
    {
        int l, r, c;
        cin >> l >> r >> c;
        if (l < minL)
            minL = l, costL = A;
        if (l == minL)
            costL = min(costL, c);
        if (maxR < r)
            maxR = r, costR = A;
        if (maxR == r)
            costR = min(costR, c);
 
        if (maxLen < r - l + 1)
            maxLen = r - l + 1, costLen = A;
        if (maxLen == r - l + 1)
            costLen = min(costLen, c);
 
        int ans = costL + costR;
        if (maxLen == maxR - minL + 1)
            ans = min(ans, costLen);
        cout << ans << "\n";
    }
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

/*
if (v[i].r > r)
            {
                if (v[i].l <= l) 
                {
                    c = v[i].c;
                    r = v[i].r;
                    l = v[i].l;
                }
                else 
                {
                    c = v[i].c + ml[l];
                    r = v[i].r;
                }
                if (ml[l] != 0) ml[l] = min(v[i].c, ml[l]);
                else ml[l] = v[i].c;
            }
            else if (v[i].r == r)
            {
                if (v[i].l == l) 
                {
                    c = min(v[i].c, c);
                }
                else if (v[i].l > l)
                {
                    c = min(v[i].c, mr[r]) + c - (mr[r]);
                }
                else 
                {
                    c += v[i].c;
                    l = min (v[i].l, l);
                    r = v[i].r;
                }
                if (ml[l] != 0) ml[l] = min(v[i].c, ml[l]);
                else ml[l] = v[i].c;
            }
            else 
            {
                if (v[i].l < l)
                {
                    c += v[i].c;
                    l = min (v[i].l, l);
                    r = v[i].r;
                    if (ml[l] != 0) ml[l] = min(v[i].c, ml[l]);
                    else ml[l] = v[i].c;
                }
                else if (v[i].l == l)
                {
                    c -= ml[l];
                    if (ml[l] != 0) ml[l] = min(v[i].c, ml[l]);
                    else ml[l] = v[i].c;
                    //cout << l << " " << ml[l] << endl;
                    c += ml[l];
                }
            }
            */