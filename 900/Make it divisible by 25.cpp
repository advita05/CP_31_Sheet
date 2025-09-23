#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int ans = INT_MAX;

        vector<string> endings = {"00","25","50","75"};

        for(auto &end : endings){
            int cnt = 0;
            int j = n - 1;

            while(j >= 0 && s[j] != end[1]) {
                cnt++;
                j--;
            }
            if(j < 0) continue;

            j--;
            while(j >= 0 && s[j] != end[0]){
                cnt++;
                j--;
            }
            if(j < 0) continue;

            ans = min(ans, cnt);
        }

        cout << ans << "\n";
    }
}
