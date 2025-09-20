#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, a, b;
        cin >> a >> b >> n;

        long long ans = b;  
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ans += min(a - 1, x);
        }

        cout << ans << "\n";
    }

    return 0;
}