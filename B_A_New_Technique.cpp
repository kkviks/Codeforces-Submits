#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, vector<int>> mp;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> idx;
        mp[idx].pb(idx);
        for (int j = 1; j < m; j++)
        {
            int x;
            cin >> x;
            mp[idx].pb(x);
        }
    }
    int x = idx;
    int v[n] = {0};
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        int y[n] = {0};
        for (int j = 0; j < n; j++)
        {
            cin >> y[j];
            if (y[j] == x)
                flag = true;
        }
        if (flag == true)
        {
            for (int i = 0; i < n; i++)
                v[i] = y[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int idx = v[i];
        for (int i = 0; i < m; i++)
            cout << mp[idx][i] << " ";
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    cout.flush();
    return 0;
}