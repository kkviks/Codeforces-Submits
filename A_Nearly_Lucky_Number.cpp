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

    string s;
    cin >> s;

    int cnt = 0;
    for (auto ch : s)
    {
        if (ch == '4' or ch == '7')
            cnt++;
    }

    if (cnt == 4 or cnt == 7)
        cout << "YES";
    else
        cout << "NO";

    cout.flush();
    return 0;
}