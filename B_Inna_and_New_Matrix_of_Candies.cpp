#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n = 0, m = 0;
    cin >> n >> m;

    set<int> s;
    string row = "";

    for (int i = 0; i < n; i++)
    {
        cin >> row;
        int x = row.find('S');
        int y = row.find('G');
        int ans = x - y;
        s.insert(ans);
    }

    if (*s.begin() < 0)
        cout << -1;
    else
        cout << s.size();

    cout.flush();
    return 0;
}