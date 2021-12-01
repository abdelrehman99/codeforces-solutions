#include <bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds; // pb_ds
//#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>


using namespace std;
typedef long long ll;
typedef long double ld;
#define EPS (1e-9)

void _IO_() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

//             N  E  S  W  NW  NE SE SW
//int dr[] = {-1, 0, 1, 0, -1, -1, 1, 1};
//int dc[] = {0, 1, 0, -1, -1, 1, 1, -1};

int main() {
    _IO_();
//    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    int tt;
    cin >> tt;
    while (tt--) {
        int x1, p1;
        cin >> x1 >> p1;
        int x2, p2;
        cin >> x2 >> p2;
        string y1 = to_string(x1), y2 = to_string(x2);
        int s1 = y1.size() + p1, s2 = y2.size() + p2;
        if (s1 > s2) {
            cout << ">\n";
        } else if (s1 < s2) {
            cout << "<\n";
        }//
        else {
            if (y1.size() < y2.size()) {
                y1.insert(y1.size(), y2.size() - y1.size(), '0');
            } else y2.insert(y2.size(), y1.size() - y2.size(), '0');
            if (y1 > y2) cout << ">\n";
            else if (y1 < y2) cout << "<\n";
            else cout << "=\n";
        }
    }

    return 0;
}
