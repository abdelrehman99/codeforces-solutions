#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define cin(v) for (auto &i : v) cin >> i;
#define cout(v) for (auto &i : v) cout << i << " ";
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
    long n, k, x;
    cin >> n >> k >> x;
    vl v(n);
    FOR (i, n) cin >> v[i];
    vector <long> v2;
    while (k--)
    {
        auto temp = (lower_bound(v.begin(), v.end(), x));
        if (temp == v.end())
        {
            for (int i = v.size() - k - 1; i < v.size(); i++) v2.push_back(v[i]);
            break;
        }
        else if (*temp <= v[0])
        {
            for (int i = 0; i <= k; i++) v2.push_back(v[i]);
            break;
        } 
        temp = (abs(*temp - x) < abs(*(temp - 1) - x)) ? temp : temp - 1;
        v2.push_back(*temp);
        cout << *temp << endl;
        v.erase(temp);
    }
    cout(v2);
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

/* 
 if (k == 1)
    {
        if (temp == v.size()) v2.push_back(v.back());
        else if (temp == -1) v2.push_back(v.front());
        else
        {
            if (v[temp] != x)
            {
                v2.push_back((abs(v[temp] - x) < abs(v[temp - 1] - x)) ? v[temp] : v[temp - 1]);
            }
            else v2.push_back(v[temp]);
        }
        //cout << temp << endl;
        //cout (v2);
        return;
    }
    temp = (abs(v[temp] - x) < abs(v[temp - 1] - x)) ? temp : temp - 1;
    if (temp == v.size())
    {
        for (int i = v.size() - k; i < v.size(); i++) v2.PB(v[i]);
    }
    else if (temp == -1)
    {
        for (int i = 0; i < k; i++) v2.PB(v[i]);
    }
    else
    {
        k--;
        l = temp - (k / 2) - 1, r = temp + (k / 2) - 1;
        if (k % 2 != 0) l--;
        if (l < 0) r += (abs(l)), l = 0;
        if (r >= v.size()) l += (v.size() - r - 1), r = v.size() - 1;
        //v2.PB(v[temp]);
        for (long i = l; i <= r; i++)
        {
            v2.push_back(v[i]);
        } 
    } 
    cout << temp << endl;
    cout (v2); */