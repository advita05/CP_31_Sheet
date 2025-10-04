#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool ans = false;
        if ((2 * b - c) > 0 && (2 * b - c) % a == 0) ans = true;
        if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) ans = true;
        if ((2 * b - a) > 0 && (2 * b - a) % c == 0) ans = true;
        cout << (ans ? "YES" : "NO") << endl;
    }
}
