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

int x;

bool binarySearch(vector<int> &v, int x)
{
    int l = 0, h = v.size() - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] == x)
            return true;
        if (x < v[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        cin >> x;
        bool flag = binarySearch(v, x);
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    cout.flush();
    return 0;
}