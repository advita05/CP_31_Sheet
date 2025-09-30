#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > p(n + 1);
        for (int i = 1; i <= n; i++) cin >> p[i];

        int k = 0;
        for (int i = 1; i <= n; i++) {
            if (p[i] != i) {
                int diff = abs(i - p[i]);
                if (k == 0) k = diff;
                else k = __gcd(k, diff);
            }
        }

        cout << k << "\n";
    }

    return 0;
}