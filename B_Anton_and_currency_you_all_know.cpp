#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    cin >> s;

    int n = s.length();
    vector<int> lastResort;
    for (int i = 0; i < s.length(); i++)
    {
        int last = s[n - 1] - '0';
        int curr = s[i] - '0';
        if (~curr & 1 and curr < last)
        {
            swap(s[i], s[n - 1]);
            cout << s;
            return 0;
        }
        else if (~curr & 1)
        {
            lastResort.pb(i);
        }
    }
    if (lastResort.size())
    {
        auto p = lastResort[lastResort.size() - 1];
        swap(s[p], s[n - 1]);
        cout << s;
    }
    else
        cout << -1;

    cout.flush();
    return 0;
}