#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int ans = -1;

        for (int i = 0; i <= 10; i++)
        {
            if (a.find(b) != string::npos)
            {
                ans = i;
                break;
            }

            a += a;
        }

        cout << ans << "\n";
    }
}