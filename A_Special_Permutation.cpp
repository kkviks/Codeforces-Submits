#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int n)
{
    cout << n << " ";
    for (int i = 1; i < n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

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
        solve(n);
    }

    cout.flush();
    return 0;
}