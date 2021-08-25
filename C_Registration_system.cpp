#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    map<string, int> m;

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (m.count(s) == 0)
        {
            m[s] = 0;
            cout << "OK\n";
        }
        else
        {
            string ans = s + to_string(++m[s]);
            m[ans] = 0;
            cout << ans << endl;
        }
    }

    cout.flush();
    return 0;
}