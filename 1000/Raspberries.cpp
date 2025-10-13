#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define nl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    vi arr(n);
    for (int &x : arr) cin >> x;

    int d = k - 1, e_cnt = 0;
    for (int x : arr) {
        if (x % 2 == 0) e_cnt++;
        d = (x % k == 0) ? 0 : min(d, k - x % k);
    }

    if (k != 4)
        cout << d << nl;
    else {
        if (e_cnt >= 2) cout << 0 << nl;
        else if (e_cnt == 1) cout << min(d, 1) << nl;
        else cout << min(2, d) << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
