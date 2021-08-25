#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> map;

    int x, i = 0;
    long long ans = 0;
    while (n--)
    {
        cin >> x;
        ans += map[x - i];
        map[x - i]++;
        i++;
    }
    cout << ans << endl;
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