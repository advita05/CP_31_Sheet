#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) odd += a[i];
            else even += a[i];
        }
        if (odd % 2 == 0 && even % 2 == 0) cout << "YES" << endl;
        else if (odd % 2 != 0 && even % 2 != 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}