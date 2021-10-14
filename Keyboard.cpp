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

float x;

struct key
{
    int a = 0;
    float r, c;
};

float valid (float x1, float x2, float y1, float y2)
{
    float c = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    //cout << c << endl;
    return c;
}

void solve()
{ 
    int n, m, ha = 0;
    cin >> n >> m >> x;
    multimap <char, pair <float, float> >  mpp;
    map <char, float> mp;
    char c;
    vector < pair <int, int> > v;
    set <char> s;
    //vector <vector <char> > v3(n, vector <char> (m));
    FOR (i, n)
    {
        FOR (j, m)
        {
            cin >> c;
            if (c == 'S')
            {
                v.PB({i + 1, j + 1});
            }
            mpp.insert({c, {i + 1, j + 1}});
            s.insert(c);
        }
    }
    if (v.size() > 0)
    {
        for (auto &k : mpp)
        {
            float f;
            for (auto &h : v)
            {
                f = valid(k.S.F, h.F, k.S.S, h.S);
                if (mp[k.F] > 0) mp[k.F] = min(mp[k.F], f);
                else mp[k.F] = f;
            }
        }
    }
    sort (all(v));
    int q;
    cin >> q;
    FOR (i, q)
    {
        cin >> c;
        if (islower(c))
        {
            if (s.find(c) != s.end()) continue;
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        else 
        {
            char cl = tolower(c);
            //cout << v.size() << endl;
            if (s.find(cl) != s.end() && !v.empty())
            {
                if (mp[cl] > x) ha++;
            }
            else 
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    cout << ha << endl;
}




signed main(){
    fast;
    int t = 1;
    //cin >> t;
    WL(t)
    {
    	solve();
        runtime();
    }
    return 0;
}
