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

vl v(10);
vvi v2(10);
vi temp; 

void rec (ll n, int i)
{
    if (n == 1) 
    {
        if (temp > v2[i]) v2[i] = temp;
        return;
    }
    for (int j = i - 1; j >= 2; j--)
    {
        if (n % v[j] == 0 && n >= v[j])
        {
            temp.PB(j);
            rec(n / v[j], i);
            temp.pop_back();
        }
    }
}

void solve()
{ 
    v[0] = 1; 
    for (int i = 1; i <= 9; i++)
    {
        v[i] = v[i - 1] * i;
    }
    //v2[4] = {3, 2, 2};
    //v2[5] = {5};
    //v2[6] = {5, 3};
    for (int i = 4; i <= 9; i++)
    {
        rec(v[i], i);
        temp.clear();
        //if (v2[i].empty()) v2[i] = {i};
        //for (auto &j : v2[i]) cout << j << " ";
        //cout << endl;
    }
    int n;
    cin >> n;
    string s;
    cin >> s;
    FOR (i, n)
    {
        if (s[i] == '0' || s[i] == '1') continue;
        else 
        {
            if (v2[s[i] - '0'].empty()) temp.PB(s[i] - '0');
            else for (auto &j : v2[s[i] - '0']) temp.PB(j);
        } 
    }
    sort(all(temp), greater <int> ());
    for (auto &i : temp) cout << i;
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
if (n == 1) 
    {
        return true;
    }
    for (int j = i - 1; j >= 2; j--)
    {
        if (n % v[j] && n >= v[j])
        {
            v2[i].PB(j);
            if (rec(n / v[j], i)) return true;
            v2[i].pop_back();
        }
    }*/