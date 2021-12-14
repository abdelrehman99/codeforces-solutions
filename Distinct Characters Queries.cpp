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


ll bs (vl &v, ll n)
{
    ll l = 0, r = v.size() - 1, temp = -1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        //if (v[mid] >= n)
    }
}

void solve()
{ 
    string s;
    cin >> s;
    ll q;
    cin >> q;
    set <ll> dist;
    map <char, set <ll> > mp;
    set <char> st;
    FOR (i, s.size())
    {
        mp[s[i]].insert(i);
        //st.insert(s[i]);
    }
    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            ll pos;
            char c;
            cin >> pos >> c;
            pos--;
            if (s[pos] == c) continue;
            if (!mp[s[pos]].empty()) mp[s[pos]].erase(pos);
            mp[c].insert(pos);
            s[pos] = c;
        }
        else
        {
            ll l, r, c = 0;
            cin >> l >> r;
            l--, r--;
            for (auto & i : mp)
            {
                auto it = i.S.lower_bound(l);
                if (!i.S.empty() && it != i.S.end() && *it <= r) c++;
            }
            cout << c << endl;
        }
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

/*
 ll n, m, k;
    cin >> n >> m >> k;
    vl v(n);
    vector <ll> s;
    FOR (i, n) cin >> v[i];
    FOR (i, m) 
    {
        cin >> s[i];
    }
    sort(all(v));
    sort(all(s));
    ll l = 0, r = m - 1, c = 0, ln = 0, rn = n - 1;
    while ((l <= r))
    {
        if (v[ln] + k < s[l]) ln++;
        else if (v[ln] - k > s[l]) l++;
        else if (v[ln] - k <= s[l] <= v[ln] + k)
        {
            c++;
            l++;
        }
        if (v[rn] - k > s[r]) rn--;
        else if (v[rn] - k < s[r]) r--;
        if (v[rn] - k <= s[r] <= v[rn] + k)
        {
            c++;
            r--;
        }
    }


    ll n;
    pl pos = {0, 0};
    cin >> n;
    vvl v(2, vector <ll> (n));
    FOR (i, n) cin >> v[0][i];
    FOR (i, n) cin >> v[1][i];
    ll i = 0, j = 0;
    vector < vector <bool > > vis(2, vector <bool> (n));
    while (pos != make_pair((ll)(1), n))
    {
        if ()
        if ((v[i][j] == 2 || v[i][j] == 1) && j < n - 1) j++;
        else if ((v[i][j] == 2 || v[i][j] == 1) && j > 0) j--;
        else if (v[i][j] >= 3 && v[i][j] <= 6 && i == 0) i++;
        else if (v[i][j] >= 3 && v[i][j] <= 6 && i == 1) i--;
        else 
        {
            cout << i << " " << j << endl;
            cout << "NO\n";
            return;
        }
        pos = {i, j};
    }
    cout << "YES\n";
    
    */
