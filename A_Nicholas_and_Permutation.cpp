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

    int i0=0,j0=n-1; int input;
    for(int i=0;i<n;i++){
        cin >> input;
        if(input==1)i0=i;
        if(input==n)j0=i;
    }
    i0++; j0++;
    int ans = max( {abs(j0-1),abs(j0-n),abs(i0-1),abs(i0-n),abs(i0-j0)} );
    cout << ans;

    cout.flush();
    return 0;
}