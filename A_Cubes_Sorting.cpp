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
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        bool flag = true;
        for(int i=1;i<n;i++){
           if(a[i]>=a[i-1]){
               cout << "YES\n";
               flag = false;
               break;
           }
        }
        if(flag)cout << "NO\n";
    }

    cout.flush();
    return 0;
}