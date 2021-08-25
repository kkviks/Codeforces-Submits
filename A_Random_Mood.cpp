#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

double solve(int n, double p)
{
    double ans = 1;
    double a = (1 - 2 * p);
    while (n)
    {
        if (n & 1)
            ans *= a;
        a *= a;
        n /= 2;
    }
    return 0.5 * (1 + ans);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    double p;
    cin >> n >> p;
    double ans = solve(n, p);
    printf("%0.10f", ans);

    cout.flush();
    return 0;
}