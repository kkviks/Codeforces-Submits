#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int &x : v)
    {
        cin >> x;
    }
    int t = max(n-200,0LL);
    int ans = INT_MIN;
    for (int i = n - 1; i >= t; i--)
    {
        for (int j = i - 1; j >= t; j--)
        {
            ans = max(ans, (i + 1) * (j + 1) - k * (v[i] | v[j]));
        }
    }
done:
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    cout.flush();
    return 0;
}