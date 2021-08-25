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

    int r, x, y, x_, y_;
    cin >> r >> x >> y >> x_ >> y_;

    double ans = sqrt((x - x_) * (x - x_) + (y - y_) * (y - y_));
    ans /= 2 * r;
    cout << ceil(ans);
    cout.flush();
    return 0;
}