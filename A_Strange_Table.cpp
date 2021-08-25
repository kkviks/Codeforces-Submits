#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,m,x;
        cin >> n >> m >> x;
        int row = (x-1)/n;
        int col = (x-1)%n;

        swap(row,col);

        int ans = row*m + col+1;
        cout << ans << endl;
        
    }

    cout.flush();
    return 0;
}