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
    char c[26];
    c[0] = 'a';
    for (int i = 1; i < 26; i++)
    {
        c[i] = c[i - 1] + 1;
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        size_t mid = s.find('a');
        //cout << mid << endl;
        int l = mid - 1, r = mid + 1;
        bool flag = true;
        while (l >= 0 || r < (int) (s.size()))
        {
            if (s[l] <= s[l + 1] && l >= 0)
            {
                flag = false;
                break;
            }
            if (s[r] <= s[r -1] && r < (int) (s.size()))
            {
                flag = false;
                break;
            }
            l--;
            r++;
        }
        if (flag)
        {
            sort(s.begin(), s.end());
            for (int i = 0; i < (int) (s.size()); i++)
            {
                if (s[i] != c[i])
                {
                    flag = false;
                    break;
                }
            } 
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}




signed main(){
    fast;
    	solve ();
    //}
    return 0;
}
