#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;

    int size = (int)s.length();
    int dp[size];

    dp[size - 1] = 0;
    for (int i = size - 1; i > 0; i--)
    {
        dp[i - 1] = dp[i] + !!(s[i] == s[i - 1]);
    }
    int origin = 1;

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ans = dp[l - origin] - dp[r - origin];
        cout << ans << endl;
    }
    cout.flush();
    return 0;
}