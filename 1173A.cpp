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

int x, y, z;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> x >> y >> z;

    char ans;

    if (x > y + z)
        ans = '+';
    else if (y > x + z)
        ans = '-';
    else if (x == y and z == 0)
        ans = '0';
    else
        ans = '?';

    cout << ans;

    cout.flush();
    return 0;
}