#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ans = max( {a*c,a*d,b*c,b*d});
    cout << ans;
    cout.flush();
    return 0;
}