#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cream = a[n - 1];
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        cream = max(cream, a[i]);
        if (cream >= 1)
        {
            ans += "1 ";
            cream--;
        }
        else
        {
            ans += "0 ";
        }
    }
    reverse(begin(ans), end(ans));
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}