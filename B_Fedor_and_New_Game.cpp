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

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    int fedor;
    cin >> fedor;
    bitset<20> f(fedor);

    int cnt = 0;
    for (auto i : v)
    {
        bitset<20> test(i);
        int diff = 0;
        for (int i = 0; i < 20; i++)
        {
            if (test[i] != f[i])
                diff++;
        }
        if (diff <= k)
            cnt++;
    }
    cout << cnt;
    cout.flush();
    return 0;
}