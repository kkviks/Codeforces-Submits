#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

int m = 1e9 + 7;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int x, y;
    cin >> x >> y;
    x += m;
    x %= m;
    y += m;
    x %= m;
    int n;
    cin >> n;

    int a[] = {x, y, (y + m - x) % m, (m - x) % m, (m - y) % m, ((m - y) % m + x) % m};
    int idx = (n - 1) % 6;
    cout << (m + a[idx]) % m;

    cout.flush();
    return 0;
}