#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        int ans = 0;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                cnt++;
                ans = max(ans, cnt); 
            } else {
                cnt = 0; // reset
            }
        }
        cout << ans << endl;
    }
}
