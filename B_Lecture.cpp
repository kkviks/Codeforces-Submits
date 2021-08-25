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

    int n, m;
    cin >> n >> m;

    map<string, string> mp, pm;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
        pm[b] = a;
    }

    for (int i = 0; i < n; i++)
    {
        string q;
        cin >> q;
        if (mp.count(q) == 1)
        {
            if (q.length() <= mp[q].length())
                cout << q << " ";
            else
                cout << mp[q] << " ";
        }
        else
        {
            if (q.length() < pm[q].length())
                cout << q << " ";
            else
                cout << pm[q] << " ";
        }
    }

    cout.flush();
    return 0;
}