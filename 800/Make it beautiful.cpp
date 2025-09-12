#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool eq = 1;
        for (int i = 1; i < n; i++) 
            if (a[i] != a[0]) eq = 0;

        if (eq) {
            cout << "NO\n";
            continue;
        }

        sort(a.begin(), a.end(), greater<int>());
        cout << "YES\n";
        for (int x : a) cout << x << " ";
        cout << "\n";
    }
}
