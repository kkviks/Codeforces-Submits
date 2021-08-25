#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    if (n >= 4 and ~n & 1)
        cout << "YES";
    else
        cout << "NO";

    cout.flush();
    return 0;
}