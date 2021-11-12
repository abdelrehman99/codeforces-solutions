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
    int n;
    cin >> n;
    vector <char> v(n);
    int two = 0;
    FOR (i, n)
    {
        cin >> v[i];  
        if (v[i] == '2') two++;  
    }
    //FOR (i, n) cout << v[i] << " ";
    //cout << endl; 
    //cout << two << endl;
    if ((two <= 2 && two != 0))
    {
        cout << "NO\n";
        return;
    }
    //sort(all(v));
    //FOR (i, n) cout << v[i];
    //cout << endl;
    int idx = INT_MAX;
    vector < vector <char> > v2(n, vector <char> (n));
    for (int i = 0; i < n; i++)
    {
        if (v[i] == '2')
        {
            idx = min(idx, i);
            bool flag = false;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] == '1') continue;
                v2[i][j] = '+', v2[j][i] = '-';
                flag = true;
                break;
            }
            if (!flag) v2[i][idx] = '+', v2[idx][i] = '-';
        }  
    }
    cout << "YES\n";
    FOR(i, n)
    {
        FOR (j, n)
        {
            if (i == j) cout << 'X';
            else if (v[i] == '1') cout << "=";
            else
            {
                if (v[j] == '1') cout << "=";
                else
                {
                    if (v2[i][j] != '+' && v2[i][j] != '-') cout << "="; 
                    else cout << v2[i][j];
                } 
            }
        }
        cout << endl;
    }
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
