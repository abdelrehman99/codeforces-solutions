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
    llu a1, b1;
    cin >> a1 >> b1;
    llu n2 = b1 - a1;
    string a = to_string(a1), b = to_string(b1), n; 
    string v;
    ll l = 0, r = 0;
    reverse(all(b)), reverse(all(a));
    //cout << a << " " << b << " " << n << endl;
    while (l < a.size() || r < b.size())
    {
        if (r >= b.size()) v.push_back(a[l]), l++;
        else if (l >= a.size()) v.push_back(b[r]), r++;
        else 
        {
            string s;
            if (b[r] < a[l])
            {   
                if (r == b.size() - 1)
                {
                    cout << -1 << endl;
                    return;
                }
                string ss;
                ss.push_back(b[r + 1]);
                ss.push_back(b[r]);
                //cout << l << " " << r << " " << (stoi(ss)) << endl;
                s = to_string((stoi(ss) - (a[l] - '0')));
                r++;
            }
            else s = to_string((b[r] - '0') - (a[l] - '0'));
            //cout << s << endl;
            v += s;
            l++, r++;
        }
    }
    //cout << to_string(('2' - '0') - ('2' - '0')) << endl; 
    //reverse(all(v));
    //cout << v.back() << endl;
    while (v.back() == '0') v.pop_back();
    //cout << v << " " << a << endl;
    l = 0, r = 0;
    string a2;
    while (l < a.size() || r < v.size())
    {
        if (r >= v.size()) a2.push_back(a[l]), l++;
        else if (l >= a.size()) a2.push_back(v[r]), r++;
        else 
        {
            string s;
            s = to_string((v[r] - '0') + (a[l] - '0'));
            reverse(all(s));
            //cout << s << endl;
            a2 += s;
            l++, r++;
        }
    }
    //reverse(all(a2));
    //cout << a2 << endl;
    if (a2 != b)
    {
        cout << -1 << endl;
        return;
    }
    reverse(all(v));
    cout << v << endl;
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
