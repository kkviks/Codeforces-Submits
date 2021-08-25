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

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c1, c2;
        if (n % 3 == 0)
        {
            c2 = n / 3;
            c1 = c2;
        }
        else
        {
            c2 = (n - 1) / 3;
            c1 = c2 + 1;
        }
        if (c1 + c2 * 2 == n)
            cout << c1 << " " << c2 << endl;
        else
            cout << c2 << " " << c1 << endl;
    }

    cout.flush();
    return 0;
}