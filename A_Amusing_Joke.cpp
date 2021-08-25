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

    string a, b, c;
    cin >> a >> b >> c;

    b += a;
    sort(all(b));
    sort(all(c));

    b == c ? cout << "YES" : cout << "NO";

    cout.flush();
    return 0;
}