#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, a;
        cin >> n;
        set <int> day[6];
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= 5; j++) {
                cin >> a;
                if(a) {
                    day[j].insert(i);
                }
            }
        }
        bool ok = false;
        for(int i = 1; i <= 5; i++) {
            for(int j = i + 1; j <= 5; j++) {
                if(day[i].size() < n / 2 || day[j].size() < n / 2)
                    continue;
                set <int> s;
                for(auto k: day[i])
                    s.insert(k);
                for(auto k: day[j])
                    s.insert(k);
                if(s.size() == n)
                    ok = true;
            }
        }
        (ok) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
