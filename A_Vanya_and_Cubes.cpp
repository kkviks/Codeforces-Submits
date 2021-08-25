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

    int c = 0;
    cin >> c;

    int sum = 0;
    int i = 1;
    while (true)
    {
        sum += (i * (i + 1)) / 2;
        if (sum > c)
            break;
        i++;
    }
    cout << i - 1;
    cout.flush();
    return 0;
}