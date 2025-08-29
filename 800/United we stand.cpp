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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
 
        if (a.front() == a.back()) {
            cout << -1 << "\n";
            continue;
        }
 
        int cnt = 0;
        while (cnt < n && a[cnt] == a[0]) {
            cnt++;
        }
 
        cout << cnt << " " << (n - cnt) << "\n";
 
        for (int i = 0; i < cnt; i++) cout << a[i] << " ";
        cout << "\n";
 
        for (int i = cnt; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
 
    return 0;
}