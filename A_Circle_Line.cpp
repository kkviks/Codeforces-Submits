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

    int a[n + 1] = {0};
    int o = 0, input;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        o += a[i];
    }
    int b, c;
    cin >> b >> c;
    if (b > c)
        swap(b, c);

    int oo = 0;
    for (int i = b; i <= c - 1; i++)
    {
        oo += a[i];
    }
    cout << min(oo, o - oo);
    cout.flush();
    return 0;
}