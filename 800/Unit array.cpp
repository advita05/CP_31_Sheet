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
        int cntNeg = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1) cntNeg++;
        }

        int ops = 0;

        if (cntNeg > n / 2) {
            ops = cntNeg - n / 2;
            cntNeg -= ops; 
        }

        if (cntNeg % 2 == 1) ops++;

        cout << ops << "\n";
    }
    return 0;
}
