#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

bool sec(pair <int, int > p, pair <int, int> p2)
{
    return (p2.second > p.second);
}


void solve()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,l,sum=0,f;

    cin>>n>>f;
    ll a[n];

    for(i=0;i<n;i++)
    {
        cin>>k>>l;

        sum+=min(k,l);

        if(k>=l)
            a[i]=0;

        else
        {
            a[i]=min(2*k,l)-min(k,l);
        }
    }

    sort(a,a+n,greater<ll>());

    i=0;
    while(f && i<n)
    {
        if(a[i]>0)
        {
            sum+=a[i];
            f--;
        }

        i++;
    }

    cout<<sum;
}




    signed main()
    {
    fast;
    //int t = 1;
    //cin >> t;
    //while(t--){
        solve();
    //}
    return 0;
}
