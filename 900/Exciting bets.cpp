#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b; 
        cin >> a >> b;
        long long g = abs(a - b);
        if (g == 0) {
            cout << 0 << " " << 0 << endl;
        } else {
            long long moves = min(a % g, g - a % g);
            cout << g << " " << moves << endl;
        }
    }
    return 0;
}
