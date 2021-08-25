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
    int cnt=0;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a==b)cnt++;
        else cnt=0;
        if(cnt==3){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    cout.flush();
    return 0;
}