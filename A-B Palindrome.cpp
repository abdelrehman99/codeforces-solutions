#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define _(x) {cout << #x << " = " << x << endl;}
     
const double PI = acos(-1);
     
     
int main(){
	
	ios::sync_with_stdio(false);
	int t ; cin >> t ;
	while(t--){
		int a , b ; cin >> a >> b ;
		int n = a + b ;
		string s ; cin >> s ;
		for (int i = 0; i < n; i++)
		{
			if(s[i] == '?') s[i] = s[n-1-i] ;
		}
		for (int i = 0; i < n; i++)
		{
			if(s[i] == '0')
				a--;
			else if(s[i] =='1')
				b--;
				
		}
		
		for (int i = 0; i < n; i++)
		{
			if(i != n-1-i && s[i] == '?'){
				if( a >= 2 ){
					s[i] = s[n-1-i] = '0' ;
					a -= 2 ;
				}else if( b >= 2 ){
					s[i] = s[n-1-i] = '1' ;
					b -= 2 ;
				}
			}else if(i == n-1-i && s[i] =='?'){
				if(a) s[i] = '0' , a--;
				else s[i] = '1' , b--;
			}
			if( i > n-i-1) break;
		}
		
		string sReverse = s ;
		
		reverse(sReverse.begin(),sReverse.end());
		
		if(sReverse == s && a == 0 && b == 0) cout << s << endl;
		
		else cout << -1 << endl;
		
	}
		
}
