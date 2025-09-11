#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int cnt = n;

        while (s.size() > 1 && s.front() != s.back()) {
            cnt -= 2;               
            s.erase(0, 1);           
            s.erase(s.size() - 1, 1); 
        }

        cout << cnt << endl;
    }
}
