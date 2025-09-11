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
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int xor_sum = 0;
        for (int x : a) {
            xor_sum ^= x;
        }

        if (xor_sum == 0) {
            cout << 0 << "\n";
        } else {
            if (n % 2 == 1) {
                cout << xor_sum << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}
