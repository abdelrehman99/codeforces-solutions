#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define all(v) v.begin(), v.end()
#define sortall(x) sort(all(x))
typedef vector<int>		vi;




void solve()
{ 
    int n, m, k;
	cin >> n >> m >> k;
	vector <int> holes(m);
	for(int i = 0; i < m; i++)
		cin >> holes[i];
	sort(holes.begin(), holes.end());
	int bone = 1, u, v;
	for(int i = 0; i < k && cin >> u >> v; i++){
		if(binary_search(holes.begin(), holes.end(), bone))
			break;
		if(u == bone || v == bone)
			bone = u + v - bone;
	}
	cout << bone;
}




signed main(){
    fast;
    //int t = 1;
    //cin >> t;
    //WL(t){
    	solve();
    //}
    //runtime();
    return 0;
}
