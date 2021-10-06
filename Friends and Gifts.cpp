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
    ll n;
    cin >> n;
    vl v2(n), v3(n);
    priority_queue <ll> pq;
    map <ll, ll> mp;
    FOR (i, n)
    {
        cin >> v2[i];
        if (v2[i]) mp[i + 1] = v2[i];
        //if (v2[i] == 0) v3.PB(i);
    }
    v3 = v2;
    sort(all (v3));
    //bool flag = false;
    //FOR (i, n) cout << v2[i] << " ";
    //cout << endl;
    //if (binary_search(all(v2), 4)) cout << "4\n";
    for (int i = 1; i <= n; i++)
    {
        if (!binary_search(all(v3), i)) pq.push(i);
    }
    //for (auto &k : v) cout << k << " ";
    //cout << endl;
    FOR (i, n)
    {
        if (v2[i] == 0)
        {
            if (pq.top() == i + 1)
            {
                int top1 = pq.top();
                pq.pop();
                if (pq.empty())
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (!binary_search(all(v3), j) && i + 1 != j && top1 != j)
                        {
                            v2[i] = j;
                            v2[mp[j] - 1] = top1;
                            break;
                        }  
                    }
                }
                else 
                {
                    v2[i] = pq.top();
                    mp[v2[i]] = pq.top();
                    pq.pop();
                    pq.push(top1);
                }
            }
            else v2[i] = pq.top(), mp[v2[i]] = i + 1, pq.pop();
        }
    }
    FOR (i, n) cout << v2[i] << " ";
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

/*
for (auto &k : v) 
            {
                if (k != i + 1 && k != 0)
                {
                    v2[i] = k;
                    k = 0;
                    break;
                } 
            } */