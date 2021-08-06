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
    

}




int main(){
    vector <pair <int , int> > v;
    v.push_back(make_pair(1,12));
    v.push_back(make_pair(2,6));
    v.push_back(make_pair(3,4));
    v.push_back(make_pair(4,3));
    v.push_back(make_pair(6,2));
    v.push_back(make_pair(12,1));
    vector <pair <int , int> > :: iterator it;
    vector <pair <int , int> > :: iterator rt;
    vector <pair <int , int> > r;
    string in;
    int test,x,y;
    cin >> test;
    getchar();
    while(test--){
        cin >> in;
        it = v.begin();
        while(it != v.end()){
            x = it->first;
            y = it->second;
            for(int i = 0; i < y; i++){
                bool flag = true;
                for(int j = i; j < 12; j += y){
                    if(in[j] == 'O'){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    r.push_back(make_pair(x,y));
                    break;
                }
            }
            it++;
        }
        cout << r.size();
        rt = r.begin();
        while(rt != r.end()){
            cout << " ";
            cout << rt->first << "x" << rt->second;
            rt++;
        }
        cout << endl;
        r.clear();
    }

    return 0;
}