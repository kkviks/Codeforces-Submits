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

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curr, ans = -1;
    curr = 1;
    for (int i = 1; i < n; i++)
    {
        curr = (a[i] >= a[i - 1] ? curr + 1 : 1);
        ans = max(ans, curr);
    }
    cout << ans;
    cout.flush();
    return 0;
}