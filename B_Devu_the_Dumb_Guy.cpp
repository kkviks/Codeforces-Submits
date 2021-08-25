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

    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += v[i] * x;
        x--;
        if (x == 0)
            x = 1;
    }
    cout << cnt;
    cout.flush();
    return 0;
}