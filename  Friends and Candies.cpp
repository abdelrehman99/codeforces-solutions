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
	int n;
  cin >> n;
  vector<int> a(n);
  int s = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s += a[i];
  }
  if (s % n != 0) {
    cout << "-1" << endl;
    return;
  }
  s /= n;
  int res = 0;
  for (int i = 0; i < n; i++) {
    if (s < a[i]) {
      res++;
    }
  }
  cout << res << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}
 /*x += ;
        y = avg - a[l];
        while (x < y && r > l)
        {
            //if (l == 0) sum++;
            sum++;
            r--;
            x += (a[r] - avg);
            //r--;
            if (x <= 0)
            {
                cout << "-1\n";
                return;
            }
        } 
        a[l] += y;
        x -= y;
        l++;
        //r--;
        //sum++; 
        while (l < r)
    {
       x = avg - a[l];
       y = a[r] - avg;
       if (x ==0)
       {
           break;
       }
       while (y < x)
       {
           r--;
           sum++;
           if (a[r] <= avg)
           {
               cout << "-1\n";
               return;
           }
           y += a[r] - avg;
       }
       y -= x;
       l++; 
    }
    if (avg != (sum * 1.0) / n)
    {
        cout << -1 << endl;
        return;
    }
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            sum++;
        } 
        else break;
    }  */