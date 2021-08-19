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





/*void sieve(vector <bool> &a)
{
    for (int i = 2; i <= a.size(); i++)
    {
        if (a[i] == true)
        {
            for (int j = i + i; j <= a.size(); j += i)
            {
                a[j] = false;
                //cout << j << endl;
            }
        }
    }
    //return a;
} */


signed main(){
    fast;
    int t = 1;
    cin >> t;
   /*vector <bool> sei(M, true);
    sieve(sei);
    //for (int i = 2; i <= 100; i++) if (sei[i]) cout << i << endl;
    vector<long> primes;
    for (int i = 2; i<=M; i++)
    {
        if (!sei[i])
            continue;
        primes.PB(i);
    } */
    vector<long> row(M), col(M);
    //col[0] = 1;
    //row.PB(1);
    //long sumr = 1, sumc = 2;
    col[1] = 1;
    row[1] = 1;
    for (long i = 2; row[i - 1] <= 1e9; i++)
    {
        row[i] = row[i - 1] + (2 * i) - 1;
        col[i] = col[i - 1] + (2 * (i - 1)) - 1;
    }
    //cout << row[2] << " " << row[3] << endl;
    //for (int i = 2; i <= 100; i++) cout << row[i] << " " << col[i] << endl;
    runtime(); 
    ll n;
    WL(t)
    {
        cin >> n;
        if (n == 1)
        {
            cout << "1 1\n";
            continue;
        }
        for (int i = 2; i < row.size(); i++)
        {
            if (n <= row[i] && col[i] <= n)
            {
                if (row[i] - n < n - col[i])
                {
                    cout << i << " " << row[i] - n + 1 << endl;
                }
                else 
                {
                    cout << n - col[i] + 1 << " " << i << endl;
                }
            }
        }
        //cout << *upper_bound(all(row), n) << " " << *lower_bound(all(row), n)  << endl;
    	//cout << lower
    }
    return 0;
}
/* //vpl v2(1e9 + 1);
    //v2[1] = {1, 1};
    //for (ll i = 1; i <= 1e9; i++)
    {
        //for (ll j = 1; j <= 1e9; j++)
        {
            ll k = i, q = j;
            while (q > 1 && k <= 1e9 && v[k][q - 1] == true)
            {
                v[k][q] = true;
                v2[r] = {k, q};
                k++;
                r++;
            }
            while (q > 1 && v[k][q - 1] == false)
            {
                v[k][q] = true;
                v2[r] = {k, q};
                q--;
                r++;
            }
            v[k][q - 1] = true;
            v2[r] = {k, q - 1};
            r++;
        }
    } */