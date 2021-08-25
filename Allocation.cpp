#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, b;
    cin >> n >> b;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0;
    int cnt = 0;
    while (b > 0)
    {
        if (b >= a[i])
        {
            cnt++;
            b -= a[i];
            i++;
        }
        else
        {
            break;
        }
    }
    cout << cnt;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
    return 0;
}