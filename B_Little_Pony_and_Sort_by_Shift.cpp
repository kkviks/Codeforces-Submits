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
 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    int idx = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
        return cout << 0, 0;
    idx++;
    for (int i = idx; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
            return cout << -1, 0;
    }
    if (a[n - 1] <= a[0])
        cout << n - 1 - idx + 1;
    else
        cout << -1;
 
    cout.flush();
    return 0;
}