#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    int i = 0, j = s.size() - 1;
    for (; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            cnt++;
            break;
        }
    }
    for (; j >= 0; j--)
    {
        if (s[j] == '*')
        {
            cnt++;
            break;
        }
    }

    while (j - i + 1 >= k)
    {

        for (int z = 0; z < k and i + z + 1 < s.size(); z++)
        {
            if (s[i + z + 1] == '*')
            {
                i = i + z + 1;
            }
        }

        cnt++;

        if (j - i + 1 >= k)
            break;

        for (int z = 0; z < k and j - z - 1 >= 0; z++)
        {
            if (s[j - z - 1] == '*')
            {
                j = j - z - 1;
            }
        }

        cnt++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    cout.flush();
    return 0;
}