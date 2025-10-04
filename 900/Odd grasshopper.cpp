#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x0, n;
        cin >> x0 >> n;
        long long d;
        if (n % 4 == 0) d = 0;
        else if (n % 4 == 1) d = n;
        else if (n % 4 == 2) d = -1;
        else d = -n - 1; P

        long long ans = (x0 % 2 == 0) ? x0 - d : x0 + d;
        cout << ans << endl;
    }
    return 0;
}
