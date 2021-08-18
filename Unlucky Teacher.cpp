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
   int n, m;
   cin >> n >> m;
   vector < pair <char, bool> > v(n);
   vector <map <char, int>> v2 (n);
   int v3[n] = {0};
   FOR (i, n) v2[i] = {{'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}};
   char c, x;
   FOR (j, m)
   {
        FOR(i, n)
        {
            cin >> c >> x;
            if (x == 'T') v[i].F = c, v[i].S = true;
            else
            {
                if (v2[i][c] == 0) v3[i]++;
                v2[i][c]++;
            } 
        }    
   }
   //cout << v3[0] << endl; 
   FOR(i, n)
   {
       if (v[i].S) cout << v[i].F;
       else if (v3[i] == 3)
       {
           for (auto &j : v2[i])
           {
               if (j.S == 0) cout << j.F; 
           }
       }
       else cout << "?";
       if (i != n - 1) cout << " ";
       else cout << endl;
   }
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t)
    {
    	solve();
        //runtime();
    }
    return 0;
}
