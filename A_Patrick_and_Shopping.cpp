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

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int ans = 2 * (d1 + d3);
    ans = min(ans, d1 + d2 + d3);
    ans = min(ans, 2*d1 + 2*d2);
    ans = min(ans, 2*d2+2*d3);

    cout << ans;

    cout.flush();
    return 0;
}