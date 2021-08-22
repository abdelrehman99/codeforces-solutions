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
    ll n, t;
    cin >> n;
    vector <long> pos, neg;
    bool pose = true, nege = true;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t > 0)
        {
            if ((!nege && pose) || pos.empty()) pos.PB(t), nege = true, pose = false;
            else if (!pos.empty() && pos.back() < t) pos.back() = t;
        }
        else
        {
            if ((!pose && nege) || neg.empty()) neg.PB(t), pose = true, nege = false;
            else if (!neg.empty() && neg.back() < t) neg.back() = t;
        }
    }
    reverse(all(pos));
    reverse(all(neg));
    /*for (auto &i : pos) cout << i << " ";
    cout << "\t";
    for (auto &i : neg) cout << i << " ";
    cout << endl; */
    long unsigned int  l = 0, r = 0;
    long  long sum = 0;
    while (l < pos.size() || r < neg.size())
    {
        if (l < pos.size()) sum += pos[l];
        if (r < neg.size()) sum += neg[r];
        l++, r++;
    }
    cout << sum << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t)
    {
    	solve();
    }
    runtime();
    return 0;
}
/* vpii neg(n), pos(n);
    int i = 0, j = 0;
    for (int c = 0; c < n; c++)
    {
        cin >> t;
        (t > 0 ? pos[i] = {t, c}, i++ : neg[j].F = t, neg[j].S = c, j++);
        (f == 0 ? f = t : f = f);
    }
    --j, --i;
    sub = 
    sort(all(pos));
    sort(all(neg));
    if (pos.size() == 0) cout << neg[j].F << endl;
    else if (neg.size() == 0) cout << pos[j].F << endl;
    else 
    {
        ll l = 0, r = 1, ans = INT_MIN, sum = 0;
        (f < 0 ? l = 1, sum = neg[0] : r = 1, sum = pos[0]);
        while (l < j && r < i)
        {
            if ((f < 0 ? l <= r : l < r)) sum += (neg[l]), l++;
            else sum += pos[r], r++;
            ans = max(sum, ans);
        }
        cout << ans << endl;
    } */