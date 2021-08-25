#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,m;
    cin >> n >> m;

    int a[n+1]; a[n]=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int cnt=1;
    int people=0;

    for(int i=0;i<n;i++){
        if(people+a[i]<=m){
            people+=a[i];
        }
        else{
            cnt++;
            people=a[i];
        }
    }
    cout << cnt;
    cout.flush();
    return 0;
}