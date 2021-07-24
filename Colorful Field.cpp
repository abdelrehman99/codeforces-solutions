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
    int n, m, k, t, temp1, temp2, c, counter;
    cin >> n >> m >> k >> t;
    //vector < vector <int> > v(n, vector <int> (m, 1))
    int v[k];
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v[i][j] = 1;
        }
    } */
    //string s[4] = {"w", "Carrots", "Kiwis", "Grapes"};
    for (int i = 0; i < k; i++)
    {
        cin >> temp1 >> temp2;
        v[i] = (m * (temp1 -1 )) + temp2;
    }
    sort (v, v + k);
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[j] < )
            {
                v[i][j] = c;
                c++;
                c = c % 4;
                if (c == 0) c = 1;
            } 
        }
    } */
    while (t--)
    {
        cin >> temp1 >> temp2;
        bool flag = false;
        counter = 0;
        c = (m * (temp1 - 1)) + temp2;
        for (int j = 0; j < k; j++)
        {
            if (v[j] < c)
            {
                counter++;
            }
            else if (v[j] == c)
            {
                flag = true;
            }
            else break;
        }
        if (flag)
        {
            cout << "Waste\n";
            continue;
        }
        if ((c - counter) % 3 == 1)
        {
            cout << "Carrots\n";
        }
        else if ((c - counter) % 3 == 2)
        {
            cout << "Kiwis\n";
        }
        else  cout << "Grapes\n";
        //cout << s[(c - k) % 4] << endl;
    }
    /*cout << endl << endl; 
    while (t--)
    {
        cin >> temp1 >> temp2;
        cout << s[v[temp1 - 1][temp2 - 1]] << endl;
    } */
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
