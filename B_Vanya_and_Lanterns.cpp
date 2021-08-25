#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,l;
    cin >> n >> l;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int mx = INT_MIN;
    for(int i=0;i<n-1;i++){
        mx = max(mx,a[i+1]-a[i]);
    }
    double ans = max( {a[0]*1.0,l-a[n-1]*1.0,mx/2.0} );
    cout << fixed << setprecision (9) << ans;
    cout.flush();
    return 0;
}