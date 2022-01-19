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
typedef vector<llu>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}




void solve()
{ 
    llu n;
    cin >> n;
    vl v(n);
    llu sum = (llu)0;
    bool flag = true;
    FOR (i, n)
    {
        cin >> v[i];
        if (sum + v[i] > ULLONG_MAX) flag = false;
        if (flag) sum += v[i];
    } 
    llu m, d, a, c;
    cin >> m;
    sort(all(v));
    if (!flag) sum = 0;
    FOR (i, m)
    {
        c = 0;
        cin >> d >> a;
        auto it1 = lower_bound(all(v), d);
        //cout << *it1 << " ";
        //cout << c << " " << d - v.back() << endl;
        if (it1 == v.end())
        {
            c = d - v.back();
            if (!flag)
            {
                FOR(i, n - 1)
                {
                    sum += v[i];
                }
                if (sum < a)
                {
                    c += a - sum;
                }
            }
            else
            {
                if (sum - v.back() < a)
                {
                    c += a - (sum - v.back());
                }
            }
        }
        else if (*it1 > d)
        {
            llu x = *it1;
            auto it2 = it1;
            if (!flag)
            {
                while (*it2 >= d && it2 != v.begin())
                {
                    it2--;
                }
                for (auto i = v.begin(); i != v.end(); i++)
                {
                    if (i != it1 && i != it2) sum += *i;
                }
                if (a > sum + *it2)
                {
                    c = a - (sum + *it2);
                    // cout << a - (sum - x) << endl;
                }
                if (it2 >= v.begin() && d >= *it2)
                {
                    if (a > (sum + x) - *it2)
                    {
                        c = min(c, (d - *it2) + (a - ((sum + x) - *it2)));
                    }
                    else
                        c = min(c, d - *it2);
                }
            }
            else 
            {
                while (*it1 >= d && it1 != v.begin())
                {
                    it1--;
                }
                //cout << a << endl;
                if (a > sum - x)
                {
                    c = a - (sum - x);
                    // cout << a - (sum - x) << endl;
                }
                if (it1 >= v.begin() && d >= *it1)
                {
                    if (a > sum - *it1)
                    {
                        c = min(c, (d - *it1) + (a - (sum - *it1)));
                    }
                    else
                        c = min(c, d - *it1);
                }
            }
            //c += max(min(max((llu)0, a - (sum - x)), d - *it1 + (max((llu)0, a - (sum - *it1)))), (llu)0);
        }
        else if (a > (sum - *it1))
            c = (a - (sum - *it1));
        cout << c << endl;
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
