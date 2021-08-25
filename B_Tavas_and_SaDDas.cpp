#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;

    int n = s.length();
    int ans = (1 << n) - (1 << 1);

    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        if (s[i] == '7')
            ans += 1 << j;
    }

    ans += 1 << 0;
    cout << ans;

    cout.flush();
    return 0;
}