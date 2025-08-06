#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector < int > copya = a;
        sort(copya.begin(), copya.end());
 
        if (copya == a || k>1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
