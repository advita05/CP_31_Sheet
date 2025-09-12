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
        for (int i = 0; i < n; i++) cin >> a[i];

        int total_twos = 0;
        for (int x : a) if (x == 2) total_twos++;

        int prefix_twos = 0;
        int answer = -1;

        for (int k = 1; k < n; k++) { 
            if (a[k-1] == 2) prefix_twos++;
            if (prefix_twos == total_twos - prefix_twos) {
                answer = k;
                break;
            }
        }

        cout << answer << "\n";
    }
    return 0;
}
