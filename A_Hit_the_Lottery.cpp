#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a[] = {100, 20, 10, 5, 1};
    int n;
    cin >> n;
    int i = 0, cnt = 0;
    while (n)
    {
        cnt += n / a[i];
        n %= a[i];
        i++;
    }
    cout << cnt;
    cout.flush();
    return 0;
}