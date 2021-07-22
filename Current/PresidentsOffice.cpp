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




void solve()
{
    set<char> adj;
    int n,m;
    char c;
    cin>>n>>m>>c;
    string room[n];
    for(int i=0;i<n;i++)
    cin>>room[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(room[i][j]==c)
            {
                if(i!=0&&room[i-1][j]!=c)
                adj.insert(room[i-1][j]);
                if(i!=n-1&&room[i+1][j]!=c)
                adj.insert(room[i+1][j]);
                if(j!=0&&room[i][j-1]!=c)
                adj.insert(room[i][j-1]);
                if(j!=m-1&&room[i][j+1]!=c)
                adj.insert(room[i][j+1]);
            }
        }
    }
    int x=0;
    if(adj.find('.')!=adj.end())
    x--;
    cout<<adj.size()+x<<endl;
}




signed main(){
    fast;
    //int t = 1;
    //cin >> t;
    //while(t--){
    	solve();
    //}
    return 0;
}
