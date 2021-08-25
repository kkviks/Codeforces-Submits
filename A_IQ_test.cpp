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

    int n;
    cin >> n;

    int a[n];
    int e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
            o++;
        else
            e++;
    }

    int x = -1;
    
    if (e == 1)
        x = 0;
    else
        x = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == x)
        {
            cout << i + 1;
            break;
        }
    }

    cout.flush();
    return 0;
}