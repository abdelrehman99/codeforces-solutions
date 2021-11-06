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
    ll n, m, x;
    cin >> n >> m >> x;
    string a, b;
    map <char, ll> c, d, g, f;
    cin >> a >> b;
    //f = a;
    FOR (i, x - 1)
    {
        c[b[i]]++;
    }
    //sort(all(c));
    //cout << c << endl;
    //sort(all(f));
    for (int i = x - 1; i < m; i++)
    {
        d[(b[i])]++;
    }
    //sort(all(d));
    //cout << d << endl;
    //sort(all(a));
    ll pos = 0;
    FOR(i, x - 1)
    {
        if (c[a[pos]] > 0) c[a[pos]]--, pos++;
    }
    if (pos == n)
    {
        cout << "YES\n";
        return;
    }
    //FOR(i, d.size()) f.PB(d[i]);
    //f = c + d;
    //cout << f << endl;
    for (int i = x - 1; i < m; i++)
    {
        //cout << a[pos] << " " << d[a[pos]] << endl;
        if (d[a[pos]] > 0 && pos < n) d[a[pos]]--, pos++;
        if (pos == n)
        {
            cout << "YES\n";
            return;
        }
    }
    //cout << count << endl;
    cout << "NO" << endl;
    //cout << f << endl;
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
if (n == x)
    {
        cout << "YES\n";
        return;
    } 
    if (flag)
    {
        for (int i = x; i < m; i++)
        {
            d.PB(b[i]);
        }
        sort(all(d));
        sort(all(a));
        bool flag2 = true;
        for (int i = x, j = 0; i < n && j < d.size(); i++, j++)
        {
            if (a[i] != d[j]) flag2 = false;
        }
        if (flag2)
        {
            cout << "YES\n";
            //return;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != d[i]) flag2 = false;
            }
            if (flag2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    else 
    {
        for (int i = x; i < m; i++)
        {
            d.PB(b[i]);
        }
        sort(all(d));
        sort(all(a));
        bool flag2 = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != d[i]) flag2 = false;
        }
        if (flag2) cout << "YES";
        else cout << "NO";
        cout << endl;
    } 
    */