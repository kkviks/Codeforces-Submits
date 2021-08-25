#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    auto solve = [](string s) {
        if (s.length() <= 10)
        {
            cout << s << endl;
            return;
        }
        string ans = s[0] + to_string(s.length() - 2) + s[s.length() - 1];
        cout << ans << endl;
        return;
    };

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }

    cout.flush();
    return 0;
}