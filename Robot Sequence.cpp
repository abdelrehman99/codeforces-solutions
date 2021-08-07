#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define WL(t) while(t--)
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
    string s;
    int n, c = 0;
    stack <char> s1, s2;
    cin >> n;
    //map <char, bool> mp = { {'U', false}, {'D', false}, {'L', false}, {'R', false} };
    cin >> s;
    FOR (i, n)
    {
        while (!s1.empty()) s1.pop();
        while (!s2.empty()) s2.pop();
        for (int j = i; j < n; j++)
        {
           if (s[j] == 'U')
           {
               if (!s1.empty() && s1.top() == 'D' )
               {
                   s1.pop();
                   if (s2.empty() && s1.empty()) c++;
               }
               else s1.push('U');
           }
           else if (s[j] == 'D')
           {
               if (!s1.empty() && s1.top() == 'U')
               {
                   s1.pop();
                   if (s2.empty() && s1.empty()) c++;
               }
               else s1.push('D');
           }
           else if (s[j] == 'L')
           {
               if (!s2.empty() && s2.top() == 'R')
               {
                   s2.pop();
                   if (s2.empty() && s1.empty()) c++;
               }
               else s2.push('L');
           }
           else if (s[j] == 'R')
           {
               if (!s2.empty() && s2.top() == 'L')
               {
                   s2.pop();
                   //cout << s1.top() << "here ";
                   if (s2.empty() && s1.empty()) c++;
               }
               else s2.push('R');
           }
        }
        //cout << "\t" << c;
        //cout << endl;
        //mp = { {'U', false}, {'D', false}, {'L', false}, {'R', false} };
    }
    cout << c << endl;
}



signed main(){
    fast;
    int t = 1;
    //cin >> t;
    WL(t){
    	solve();
        runtime();
    }
    return 0;
}
