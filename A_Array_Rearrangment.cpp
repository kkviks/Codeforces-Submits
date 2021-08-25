#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool solve()
{
    int n, x;
    cin >> n >> x;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (a[i] + b[i] > x)
            return false;
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        bool ans = solve();
        cout << (ans ? "Yes" : "No") << endl;
    }

    cout.flush();
    return 0;
}