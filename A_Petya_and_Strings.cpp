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

    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
    {
        if (tolower(a[i]) < tolower(b[i]))
        {
            cout << -1;
            return 0;
        }
        if (tolower(a[i]) > tolower(b[i]))
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    cout.flush();
    return 0;
}