#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        }
        else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << n / 2 << "\n";
            if (n % 2 == 1) {
                cout << 3 << " ";
                for (int i = 1; i < n / 2; i++) cout << 2 << " ";
            }
            else {
                cout << 2 << " ";
                for (int i = 1; i < n / 2; i++) cout << 2 << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
