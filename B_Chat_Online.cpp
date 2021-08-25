#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back

void update(int l, int r, int a[])
{
    if (r < 0)
        return;
    if (l < 0 and r >= 0)
        l = 0;
    if (l > 1000 || r > 1000)
        return;
    fill(a + l, a + r + 1, 1);
}

void solve(vector<pair<int, int>> &v, int x, int y, int a[])
{
    int l, r;
    for (auto interval : v)
    {
        l = interval.first - y;
        r = interval.second - x;
        update(l, r, a);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int p, q, l, r;
    cin >> p >> q >> l >> r;

    int a[1000];
    memset(a, 0, sizeof(a));

    vector<pair<int, int>> v;
    v.reserve(p);
    for (int i = 0; i < p; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        v.pb({t1, t2});
    }
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        solve(v, x, y, a);
    }
    int ans = count(a + l, a + r + 1, 1);
    cout << ans;
    cout.flush();
    return 0;
}