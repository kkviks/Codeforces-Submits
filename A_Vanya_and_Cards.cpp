#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, x;
    cin >> n >> x;

    int sum = 0;
    for (int i = 0, j; i < n; i++)
    {
        cin >> j;
        sum += j;
    }
    int ans = abs(sum) / x + !!(abs(sum) % x);
    cout << ans;
    cout.flush();
    return 0;
}