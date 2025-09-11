#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], a[j]) <= 2) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (found) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
