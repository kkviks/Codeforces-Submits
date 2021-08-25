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
    set<int> s1, s2;

    int input = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        s1.insert(input);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> input;
        s2.insert(input);
    }

    int min_number = INT_MAX;
    for (int x : s1)
    {
        if (s2.count(x) == 1)
        {
            min_number = min(min_number, x);
        }
    }
    if (min_number != INT_MAX)
    {
        cout << min_number;
    }
    else
    {
        int a = *min_element(all(s1));
        int b = *min_element(all(s2));
        cout << min(a, b) << max(a, b);
    }

    cout.flush();
    return 0;
}