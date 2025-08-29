#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(ans, abs(a[i]));
    }

    cout << ans << "\n";
    return 0;
}
